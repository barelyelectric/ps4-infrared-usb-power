This is an arduino circuit to cycle power to a usb flash drive (or any device) using learned commands from any infrared remote control, for the purpose of delivering an exploit to the PS4 at the correct time (without getting off the couch).
#
This page will help you figure out the hex codes from your remote:
https://www.makerguides.com/ir-receiver-remote-arduino-tutorial/

I've included code that had a few manufacturers removed so it would compile without errors.
#
If you use a different arduino for either the decoding or the custom circuit, be sure to change the pins used for the infrared input and the transistor output in the provided code. I am using this with a USB 2.0 flash drive, only one of about ten USB 2.0 cables I tested worked (likely due to spacing between pins for USB 3.0) and I had to add an unpowered USB 2.0 hub to get it to work.

Programming the Arduino Pro Mini can be a pain in the ass because you need a ftdi to usb adapter, but an Arduino Uno will work too it's just bigger and you need to change the pinouts in the code. If you order a Pro Mini, be sure to get the 5V version as there is a 3.3V version too.

I expect this entire project will be replaced at some point by a device that can interface with the PS4's software and be fully automatic, but until then this is pretty awesome. Keep in mind this method is not limited to infrared, so you could use a Wemos D1 with wifi and an app on your phone, bluetooth, two long wires to a button, etc.
