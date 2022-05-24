# Arduino_flicker_node_cmri-main

This sketch uses pin 3 to connect the led and pin 2 to be the trigger from jmri

The node address is set to 25 in this case and you need to give the trigger the address of 25001.
The light will flicker for about 10 seconds in this case.

The code is only to show you how it could be done. it has been tested on an arduino nano on my layout.

This will only work with a usb lead or a different rs485 to ttl converter that I use. It could be coverted to use the cheaper unit
but that unit uses pin 2 to work the rs485 bus.

verion 2 is a better way this could have been done in this case the led is on pin 10 not pin 3
