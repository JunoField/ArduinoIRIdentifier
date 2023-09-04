# IRTest
Just a quick demo sketch for the generic "Car MP3" remote controls included with many Arduino starter kits, such as this:
https://www.aliexpress.com/item/4000683769904.html 

Simply sends the name of the button over serial when it is pressed.

Currently using Pin 4 for the IR receiver and a serial baud rate of 9600.
 
## Remote codes

| Button |  Code   |
|--------|---------|
|**Held down code**|0 (decimal)|
|CH-|3125149440|
|CH|3108437760|
|CH+|3091726080|
|Prev|3141861120|
|Next|3208707840|
|Play/Pause|3158572800|
|Vol-|4161273600|
|Vol+|3927310080|
|EQ|4127850240|
|0|3910598400|
|100+|3860463360|
|200+|4061003520|
|1|4077715200|
|2|3877175040|
|3|2707357440|
|4|4144561920|
|5|3810328320|
|6|2774204160|
|7|3175284480|
|8|2907897600|
|9|3041591040|

