# Navigator Kill Board Project Overview

## General
* Get everybody on the same page in terms of software, access to documentation, and how we'll be moving forward
	* Make sure everybody has Altium, Code Composer Studio, and Git/Github
	* Potentially helpful software, schematics, and documentation
		* [Altium Project of Kill Board to be updated](https://github.com/uf-mil-electrical/SVN-Legacy/tree/master/Navigator%20SVN/Current%20Projects/Kill%20Board)
		* [Another variant of Kill Board](https://github.com/uf-mil-electrical/SVN-Legacy/tree/master/Navigator%20SVN/Current%20Projects/Kill%20Switch)
		* [Tiva™ TM4C123GH6PM Microcontroller Datasheet](https://www.ti.com/lit/gpn/tm4c123gh6pm)
		* [Introduction to the Controller Area Network (CAN)](https://www.ti.com/lit/an/sloa101b/sloa101b.pdf)
		* [CAN_to_USB_TIVA](https://github.com/uf-mil-electrical/SVN-Legacy/tree/master/Navigator%20SVN/Current%20Projects/CAN_to_USB_TIVA)
		* [CAN ID Format for SubjuGator](https://github.com/uf-mil-electrical/SVN-Legacy/blob/master/Subjugator%20SVN/Firmware/CAN%20ID%20Groups.xlsx)	
		* [Generic Navigator Documentation](https://github.com/uf-mil-electrical/NaviGator-Wiring-Documentaion)
		* Appendix B of [Maritime RobotX Challenge Rules and Requirements v1](https://robonation.org/app/uploads/sites/2/2021/06/2022-Maritime-RobotX-Challenge-Rules-and-Requirements-v1.0.pdf) contains specifications the Kill Board has to meet
* Do a better job at documenting our work and making that documentation easily accesible and centralized for those in the future than our predecessors 
* Answering our own questions
	* Look at past documentation
	* Ask past and current experienced members
	* Physical investigations and probes of NaviGator

## Hardware/PCB
### Tasks
1. Port over old schematics for the kill board, leaving out the microcontroller and uart module that are going to be replaced
2. Add in Tiva microcontroller (Most likely TM4C123GH6PM)
3. Add in CAN Transceiver (Most likely SN65HVD230DR)
4. Add in failsafe functionality, if not already implemented
	1. Look at which voltage level for relay_ctrl causes the thruster relay to be open and make sure that is the default unless the kill board is actively driving/asserting something else
		1. Implementation: maybe pull-up or pull-down resistor
5. Make everything play nice with each other

### Questions/Issues
* Which variant of the Kill Board is currently installed (Kill Board or Kill Switch)? 
### Answers
	--Not Sure will have to look at navigator --Alex 

## Interface
Each CAN to USB board only supports up to 2 CAN nodes.
	--No, USB to can is a entry/exit to the bus, there can be upto 128 or 256 nodes on the bus --Alex
	
### Questions
* Is one already installed?
	* If so, is there space for the kill system on that board?
		-- The can to usb will be a seperate board  -- Alex
* If we have to add a CAN to USB board, are there spares or do we have build and solder a new one?
		-- There are 2 being put together, you can use one of those --Alex 
* What's the current CAN ID format being used for the NaviGator?
		-- Unsure, you can design this yourself --Alex 
### Answers
¯\_(ツ)_/¯ ¯\_(ツ)_/¯ ¯\_(ツ)_/¯ ¯\_(ツ)_/¯ ¯\_(ツ)_/¯ ¯\_(ツ)_/¯

## Firmware
Can't really do much until we have the above layers done and settled. Till then let's familiarize ourselves with Tiva developement.

## Building and Wiring

## Testing
