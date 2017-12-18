# OmniPod PDM Dump decoding

This page contains a C# dump of the Omnipod PDM software which is on the device itself. 

I am now trying to convert the C# code back into python code to recreate the Omnipod commands for use via the Rileylink setup to achieve the [openaps](https://openaps.org) goal with using an Omnipod instead of the tubed 8 year old pumps.

## How to use
```
git clone https://github.com/Lytrix/omni.git
pip install -r requirements.txt
python omnipod_h_parser.py pdm_eu.h
```

## Current Status
- Created an json dictionary and csv dump of all the available commands
- The current code uses a lot of index placeholders which makes reading the functions difficult to read. With the created JSON the next step will be replacing the indexes with the proper names of the commands.

#### Stay Up to Date!
[Join the Slack channel](https://omniapsslack.azurewebsites.net/) to discuss this work.
(To view, you must be logged into the OmniAPS Slack channel. [Click here](https://omniapsslack.azurewebsites.net/) to join.)

* [Find out more about the NightScout community here.](https://github.com/nightscout)
* [Find out more about the OpenAPS open source DIY artificial pancreas project here.](https://openaps.org)
* Thanks for supporting this effort!!

#### Rules for Contributing to this Repository

* All code updates require the use of Pull Requests.