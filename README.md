# OmniPod PDM Dump decoding

This page contains a C# dump of the Omnipod PDM software which is on the device itself. This is forked from this github page: https://github.com/ps2/omni.

I am now trying to convert the C# code back into python code to recreate the Omnipod commands for helping developping using the Omnipod in the Rileylink setup to achieve the [openaps](https://openaps.org) goal with using an Omnipod instead of the tubed 8 year old pumps.

## How to use
```
git clone https://github.com/Lytrix/omni.git
pip install -r requirements.txt
python omnipod_h_parser.py pdm_eu.h
```

## First try of converting the messagePOD_generateBolus_C80CF9C0 to some more Python readable code to understand the steps
```
python generateBolus.py
```

## Current Status
- Created an [json dictionary](https://github.com/Lytrix/omni/blob/master/pdm-eu.h.csv) and [csv dump](https://github.com/Lytrix/omni/blob/master/pdm-eu.h.csv) of all the available commands. Created a tester.h to first test it with.
- The current code uses a lot of index placeholders which makes reading the functions difficult to read. 
- With the created JSON the next step will be replacing the indexes in the .c file with the proper names of the commands to work out the temp basal en error functions for example.
- Created a first generateBolus.py with all used functions and used dictionaries. to have it run seperately. (30 dec 2017)

##
#### Stay Up to Date!
[Join the Slack channel](https://omniapsslack.azurewebsites.net/) to discuss this work.
(To view, you must be logged into the OmniAPS Slack channel. [Click here](https://omniapsslack.azurewebsites.net/) to join.)

* [Find out more about the NightScout community here.](https://github.com/nightscout)
* [Find out more about the OpenAPS open source DIY artificial pancreas project here.](https://openaps.org)
* Thanks for supporting this effort!!

#### Rules for Contributing to this Repository

* All code updates require the use of Pull Requests.
