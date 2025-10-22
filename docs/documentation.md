---
title: Documention
description: Everything you need to know to set up your Morse Code LED Blinker.
---

# Arduino IDE
Download the latest Arduino IDE [here](https://www.arduino.cc/en/software/). Choose the right installer for your operating system and install the software.

# Arduino Hardware Package
In order to program your Morse Code LED Blinker, an additional board package must be installed to support the utilized microcontroller. Open the Arduino IDE, go to ```File``` and click on ```Preferences```. In the Tab ```Settings```, add the following URL to the section "Additional boards manager URLs":

```txt
https://mcudude.github.io/MicroCore/package_MCUdude_MicroCore_index.json
```

# C++ Code
Copy and paste the following code into the Arduino IDE. Navigate to the predefined string ("HELLO WORLD" by default) and edit it to your likings.
{% gist f2d3c8d7c92c7b595ff7ab5da78a2490 %}

