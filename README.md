# Engineering 2
arduino projects S1 engineering 2
Arduino Projects covering LCD screens, potentiometers, LCD Backpacks, photointerrupters and motors
# IntermediateArduino
## LED Blink Revisited
### Description
Use sublime to make an LED blink, and then fade. I used a delay and variable to add and reduce current running through the LED.
### What I Learned
* How to better use loops and variables 
* Refresher on Arduino
### ![Wiring](Media/Fritzing/Led_Blink_Revisited.png)
### [Code](IntermediateArduino/Led_Blink_Revisited)
## Hello LCD
### Desciption
This was my first time using an LCD screen, and with a little help pretty quickly I got my screen to display "Hello World." I used https://learn.adafruit.com/character-lcds/wiring-a-character-lcd and code found in the hello LCD module on canvas.
### What I Learned
* How to use sublime 
* Where I can select the port and board
* http://wiki.chssigma.com/index.php?title=Engineering_2_Student_Pages is helpful to find code you need
### ![Wiring](Media/Fritzing/Hello_LCD.jpg)
### Credit: Abigail Paquette
### [Code](IntermediateArduino/Hellolcd/HelloLCD.ino/HelloLCD.ino.ino)
## LCD Backpack
### Description
Using an LCD Backpask with an LCD screen for the first time, displaying "Hello World." It was much easier to set up the wiring with the backpack, and I used switch commands to count button clicks.
### What I Learned
* Backpacks make LCD Easier
* How to count button hits with an LCD screen (Switchstate commands)
* How to use a new tool with an LCD screen
* I ran into the problem of my button adding 2 instead of 1, but I replaced it and it fixed the problem
### ![Wiring](Media/Fritzing/LCD_Backpack.jpg)
### Credit: Abigail Paquette
### [Code](IntermediateArduino/lcd_backpack/LCD_Backpack.ino/LCDBackpack.ino/LCDBackpack.ino.ino)
## Photointerrupters
### Description
Using and soldering a T-Slot photointerrupter to detect if anything is in the slot. I had some trouble soldering, and melted part of the photointerrupter. It was still mostly functional, and was able to detect when there was something in the t slot.
### What I Learned
* Do not let the pins touch when soldering 
* Be careful with the angle you solder at (I took a pretty big chunk out of my photointerrupter)
* This would be a helpful project when operating the wheel in a PID box
* Helpful link :https://www.arduino.cc/reference/en/language/functions/external-interrupts/attachinterrupt/
### ![Wiring](Media/Fritzing/Photointerrupter.png)
Credit: Abigail Paquette
### [Code](IntermediateArduino/Photointerrupter/photointerrupters.ino)
## Potentiometers
### Description
Use a potentiometer to change LED brightness and display it on an LCD screen. I used a breadboard potentiometer to change the brightness.
### What I Learned
* How to use an LED with an LCD screen and potentiometer 
* All code you need is online
* Analogwrite commands were helpful in this assignment
### ![Wiring](Media/Fritzing/Potentiometer.jpg)
Credit: Abigail Paquette
### [Code](IntermediateArduino/LCD_Potentiometer/LCD_Potentiometer.ino)
## Motor Control
### Description
Use a battery pack and code to control a motor. This became important during my project, and I used analog funtions to spin the motor.
### What I Learned
* How to wire the battery box 
* Soldering on one side of a battery does not get you power from that battery
* How to use a motor
* I had a problem getting the code to upload, so I examined my wiring and saw a short and fixed it
### ![Wiring](Media/Fritzing/Motor_Control.png)
Credit: Abigail Paquette
### [Code](IntermediateArduino/Motor_control/Motor_control.ino)
# Solidworks
## A little practice
### Description
A quick refresher on parts and assemblies. I used mates, fillets, patterns, cuts and extrusions to complete this assignment.
### What I Learned
* How to pattern an extrusion 
* Do not pattern around a face, because if you mirror the pattern it will be messed up on the mirror
### ![Image 1](Media/CAD/MyPressureplate.JPG)
### ![Image 2](Media/CAD/Tutor_Assem.JPG)
## Sweeps and lofts
### Description
Using sweeps and lofts to make a hammer and a candlestick. Through this assignment, I learned to extrude along a curve to make a hammer and candlestick.
### What I Learned
* How to use sweeps 
* Extruding is difficult along a curve
* How to use lofts
* Solidworks tutorials are very helpful, and you should explore them if you are stuck
### ![Image1](Media/CAD/hammer.JPG)
### ![Image2](Media/CAD/Cstick.JPG)
## Design Tables
### Description
Use a design table to make different sized spools. The design table featuree was difficult at first, but I got the hang of it and was able to make the parts and holes.
### What I Learned
* How to use a design table 
* Naming your demensions is important so the table is easy to read
* How to use temporary axis
* This was helpful when I was making the sides to the PID box
### ![Image](Media/CAD/spool.JPG)
## Advanced Mechanical Mates
### Description
Making 3 configurations and locking them together with mechanical mates. I learned how to use a new type of mate, which will be helpful in the future.
### What I Learned
* How to use a slot mate 
* This will be helpful for me when dealing with kerf
* How to configure color
### ![Image](Media/CAD/Advanced_MM.JPG)
