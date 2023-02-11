This folder contains 7Segment Led Display code which takes input for every button count and displays output(Arduino Programming), and output video with neccessary figures.

Components Used:
Arduino Uno
Resistors		220 Ohms (i.e roughly 5V/15m), 15m Amphere is the current required for turning on the led.
7Segment LED Display (Common Anode Display)
BreadBoard
Button

Theory:
The Embedded System is the Combination of HARDWARE and SOFTWARE. MC/MP are examples of the embedded system.
I have used Arduino programming(i.e. C-programming), to run Arduino Uno the embedded system.
Based on the Connections.png file attatched to this folder, I have made connections including resistors. These Resistors however drops the voltage and send the required current to the LED's.
Based on the arrangement of these led's, Numbers from 0-9 and Alphabets from A-H can easily be formed. This can be shown in the video.
The respective pins must be made HIGH or LOW based on the necessity, i.e. required character  .

Procedure to follow: (If you are uploading the provided code)
Make the connections as shown in figure("Connections.png" -- for Common Anode Display).
For Common Cathode Display just replace both vcc to gnd. (refer "Pin_Config")
Save and Compile code, then upload it to the Arduino Uno.
Check the results. 
