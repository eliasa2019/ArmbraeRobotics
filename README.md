VexNET Robotics
====
This repository contains all necessary files to program the VexNET robot system, including
1. a basic template for a robot controlled by two sticks and with a claw on an arm,
2. a completed robot program with basic functionality, and
3. an experimental robot program for testing and implementing new features

Downloading the RobotC code to the controller and the VexNET cortex
----
The steps to add the code you have written for your robot can be convoluted, so it is important to follow these steps in the proper order.
1. Start with both the handheld joystick and the VexNET robot microcontroller turned off.
2. Connect the computer to the microcontroller with a USB A-A cord. The robot's lights should turn on at this point.
3. Save and compile your code. If there are any syntax errors in your code, the compiler will show an error and indicates where the troublesome line is.
4. Download the code to the robot.
5. Disconnect the USB A plug from the computer. The robot's lights should turn off.
6. Connect that end of the USB A cable to the port on the back of the handheld joystick.
7. Turn the microcontroller on the robot on. The lights on both the microcontroller and the joystick should turn on. Wait until the light turns a solid green on the joystick.
8. Turn the microcontroller off and disconnect the USB A-A cord from both the microcontroller and the joystick.
9. Connect the two wireless keys into both the microcontroller and the joystick.
10. Turn the microcontroller and the joystick on. After ~10-20 seconds, the lights on the joystick should turn a solid green.
11. Now you are ready to go!

These steps, along with much more information on the VexNET system, can be found at the [Vex EDR curriculum website](https://curriculum.vexrobotics.com/appendices/appendix-2.html).

Additional resources
----
The RobotC IDE is dowloadable from the [Vex EDR website](https://www.vexrobotics.com/robotc-vexedr-vexiq.html) and the C standard library is dowloadable from the [GNU website](https://www.gnu.org/software/libc/) in case you need it. The RobotC programming language is heavily based on C, though most features you may need to program for the robot can be easily implemented with a background in any programming language.

RobotC tips and tricks
----
* Use the "Motor and Sensor Setup" wizard to modify the `#pragma config()` statements instead of editing them directly through the RobotC IDE.
* Follow the instructions to download new code to the robot carefully and completely.
* Comment your code so people can understand it in the future!

GitHub suggestions
----
To suggest new features for the robot, go to the "Issues" tab found at the top of this page and click it. Then, click on the green "New issue" button to detail your suggestions for improvements! (Requires a GitHub account)
