#pragma config(Motor,  port1,           leftMotor,     tmotorNone, openLoop)
#pragma config(Motor,  port6,           clawMotor,     tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port7,           armMotor,      tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port10,          rightMotor,    tmotorNone, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*----------------------------------------------------------------------------------------------------*\
|*                           - Dual Joystick Control with Arm - 1 Remote -                            *|
|*                                      ROBOTC on VEX 2.0 Cortex                                      *|
|*                                                                                                    *|
|*  This program uses both the Left and the Right joysticks to run the robot using "tank control".    *|
|*  The Group 6 buttons on the top-right of the VEXnet Joystick are used to raise and lower an arm.   *|
|*                                                                                                    *|
|*                                        ROBOT CONFIGURATION                                         *|
|*    NOTES:                                                                                          *|
|*    1)  Ch1 is the X axis and Ch2 is the Y axis for the RIGHT joystick.                             *|
|*    2)  Ch3 is the Y axis and Ch4 is the X axis for the LEFT joystick.                              *|
|*                                                                                                    *|
|*    MOTORS & SENSORS:                                                                               *|
|*    [I/O Port]              [Name]              [Type]              [Description]                   *|
|*    Motor - Port 2          rightMotor           VEX Motor           Right motor                    *|
|*    Motor - Port 3          leftMotor            VEX Motor           Left motor                     *|
|*    Motor - Port 6          armMotor             VEX Motor           Arm motor                      *|
\*----------------------------------------------------------------------------------------------------*/

//+++++++++++++++++++++++++++++++++++++++++++++| MAIN |+++++++++++++++++++++++++++++++++++++++++++++++

task main()
{
	while(true)
	{
		//Driving Motor Control
		motor[leftMotor] = 3*(vexRT[Ch3]) / 5;
		motor[rightMotor] = 3*(vexRT[Ch2]) / 5;

		//Arm Control
		if(vexRT[Btn6U] == 1)
		{
			motor[armMotor] = 40;
		}
		else if(vexRT[Btn6D] == 1)
		{
			motor[armMotor] = -40;
		}
		else
		{
			motor[armMotor] = 0;
		}
		if(vexRT[Btn5U]==1)
		{
			motor[clawMotor] = 40;
		}
		else if(vexRT[Btn5D]==1)
		{
			motor[clawMotor] = -40;
		}
		else
		{
			motor[clawMotor] = 0;
		}
	}
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++