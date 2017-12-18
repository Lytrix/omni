#!/usr/bin/env python

from pyparsing import *
import argparse
import json
import pandas as pd

# Functions

def wordContainsAny(string, set):
    for character in set:
        if character in string:
            return True
    return False


def lastDictName(sDict):
    keyName = list(sDict.keys())[-1]
    return keyName


def convertObject(listWords, sDict, definitions):
    """Create Dict for each item in struct"""
    #print('test', listWords)
    Object = {}
    Object["id"] = len(sDict[lastDictName(sDict)]) + 1
    Object["name"] = listWords[-1].replace(';', '')
    Object["type"] = listWords[:-1][-1]
    #print(definitions)
    for key, value in definitions.items():
        if listWords == key:
            Object["typeField"] = item.value
        else:
            Object["typeField"] = 'Not defined in .h'
    Object["struct"] = lastDictName(sDict)
    #print(Object)
    return Object


def createDefinitions(listWords, definitions):
    definition = listWords[1]
    typeField = listWords[2]
    definitions[definition] = typeField
    #print(definitions)
    return definitions


def createStructDict(listWords, sDict, ignoreChars, definitions):
    """
       Get a line of words, convert it to an array of words
       and put in dict for each struct.
    """
    #print(listWords)
    if listWords[0] == 'struct':
        structName = listWords[-1]
        print(structName)
        sDict[structName] = []
    if not wordContainsAny(listWords[0], ignoreChars):
        item = convertObject(listWords, sDict, definitions)
        sDict[lastDictName(sDict)].append(item)
    return sDict


def main(fileName):
    with open(fileName, 'r') as headerFile:
        headerText = headerFile.read()
    # global variable
    structSet = {}
    ignoreChars = ('{',
                   '}', 
                   '/*',
                   'typedef' # To be added
                   )
    definitions = {}

    for aLine in headerText.split('\n'):
        listWords = aLine.strip().split()
        #print(listWords)
        if listWords != []:
            if listWords[0] == '#define':
                definitions = createDefinitions(listWords, definitions)
            else:
                structSet = createStructDict(listWords, structSet, ignoreChars, definitions)
            
    #print(structSet)

    # write files
    with open(fileName + '.json', 'w') as outFile:
        json.dump(structSet, outFile, indent=2)
    keys = structSet.keys()
    print(keys)


    totalSet = []
    for key in keys:
        totalSet.extend(structSet[key])
    
    df = pd.DataFrame.from_dict(totalSet)
                    
    print(df.tail())
    df.to_csv(fileName + '.csv', header=True)


if __name__ == '__main__':
    desc = "Convert all structs to Python Dicts of a C# .h file, it also exports as a json file. Example: python omnipod_h_parser.py test.h"
    parser = argparse.ArgumentParser(desc)
    parser.add_argument('filename', type=str,
                        help='Add filename', nargs=1)
    args = parser.parse_args()

    main(args.filename[0])
