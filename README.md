VexNET Robotics
====
This repository contains all necessary files to program the VexNET robot framework, including
1. a basic template for a robot controlled by two sticks and with a claw on an arm,
2. a completed robot program with basic functionality, and
3. an experimental robot program for testing and implementing new features

The RobotC IDE is dowloadable from the [Vex EDR website](https://www.vexrobotics.com/robotc-vexedr-vexiq.html) and the C standard library is dowloadable from [GNU's website](https://www.gnu.org/software/libc/) in case you need it. The RobotC programming language is heavily based on C, though most features you may need to program for the robot can be easily implemented with a basic background in any programming language.

Downloading the RobotC code to the controller and the VexNET cortex
----
The steps to add the code you have written for your robot can be convoluted, so it is important to follow these steps in the proper order.
1. Start with both the controller and the VexNET cortex turned off.
2. 
3. 
These steps, along with much more information on the VexNET system, can be found at the [Vex EDR curriculum website](https://curriculum.vexrobotics.com/appendices/appendix-2.html).

RobotC tips and tricks
----
* Use the "Motor and Sensor Setup" wizard to modify the `#pragma config()` statements instead of editing them directly through the RobotC IDE.
