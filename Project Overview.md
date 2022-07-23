# Navigator Kill Board Project Overview

### 07/16/2022
ST60-2230C-U Transceiver + 1000146 Antenna

## General
* Assign Aditya the task of creating and updating as we go electrical/hardware and firmware flow diagrams so that people (us included) can get a quick understanding visually of the system and our code (03/17/2022) 
* Some of our questions have been answered. Still in the process of getting access to Solar Park to look at Navigator. We'll proceed with what's in the [firmware](https://github.com/uf-mil-electrical/Navigator_Kill_Board/edit/master/Project%20Overview.md#firmware) section. If the delay is too long, we'll assume Kill Switch is what's on the sub and work from there. (03/13/2022)
* Potentially helpful software, schematics, and documentation
	* [Altium Project of Kill Board to be updated](https://github.com/uf-mil-electrical/SVN-Legacy/tree/master/Navigator%20SVN/Current%20Projects/Kill%20Board)
	* [Another variant of Kill Board](https://github.com/uf-mil-electrical/SVN-Legacy/tree/master/Navigator%20SVN/Current%20Projects/Kill%20Switch)
	* [Tiva™ TM4C123GH6PM Microcontroller Datasheet](https://www.ti.com/lit/gpn/tm4c123gh6pm)
	* [Introduction to the Controller Area Network (CAN)](https://www.ti.com/lit/an/sloa101b/sloa101b.pdf)
	* [CAN_to_USB_TIVA](https://github.com/uf-mil-electrical/SVN-Legacy/tree/master/Navigator%20SVN/Current%20Projects/CAN_to_USB_TIVA)
	* [CAN ID Format for SubjuGator](https://github.com/uf-mil-electrical/SVN-Legacy/blob/master/Subjugator%20SVN/Firmware/CAN%20ID%20Groups.xlsx)	
	* [Generic Navigator Documentation](https://github.com/uf-mil-electrical/NaviGator-Wiring-Documentaion)
	* Appendix B of [Maritime RobotX Challenge Rules and Requirements v1](https://robonation.org/app/uploads/sites/2/2021/06/2022-Maritime-RobotX-Challenge-Rules-and-Requirements-v1.0.pdf) contains specifications the Kill Board has to meet
	* [Programming TI MCU using Tiva C LaunchPad](https://publiclab.org/notes/JSummers/12-29-2018/programming-texas-instruments-microcontrollers-using-the-tiva-c-launchpad)
	* [Tiva Firmware Drivers Documentation](https://ume.gatech.edu/mechatronics_lab/LabMaterials/6_TivaWare_Peripheral_Driver_Library_User_Guide_Rev2.1.1.71.pdf)
* Do a better job at documenting our work and making that documentation easily accesible and centralized for those in the future than our predecessors 
* Answering our own questions
	* Look at past documentation
	* Ask past and current experienced members
	* Physical investigations and probes of NaviGator

## Hardware/PCB
### Verification
* Probe voltage values of stop buttons; if they're not 3.3, convert them as such before connecting to MCU
* Check capacitor footprint matches with what MIL has
### Tasks
1. Port over old schematics for the kill board, leaving out the microcontroller and UART module that are going to be replaced
2. Add in Tiva microcontroller (Most likely TM4C123GH6PM)
3. Add in CAN Transceiver (Most likely SN65HVD230DR)
4. Add in failsafe functionality, if not already implemented
	1. Look at which voltage level for relay_ctrl causes the thruster relay to be open and make sure that is the default unless the kill board is actively driving/asserting something else
		1. Implementation: maybe pull-up or pull-down resistor
5. Make everything play nice with each other

### Questions/Issues
* Which variant of the Kill Board is currently installed (Kill Board or Kill Switch)? 
* Will other systems that utilizes signals at 2.4 GHz interfere with our signal?
### Answers
	* Kill Board
	* Need answer

## Interface
There's no pre-existing CAN network on the Navigator so we can proceed without any constraints from one. We have to design our own CAN ID format to interface with the computer. That format should be able to be extended by future projects if need be. 
	
### Questions
* If we have to add a CAN to USB board, are there spares or do we have build and solder a new one?
		-- There are 2 being put together, you can use one of those --Alex 

## Firmware
Let's set up boilerplate and other code that doesn't depend on the implementation of the layers above while we're waiting for access to Navigator.
* For PD7, remember to unlocked using direct register writes to the relevant GPIO_O_LOCK and GPIO_O_CR registers before this calling function GPIOPinTypeGPIOInput
## Building and Wiring

## Testing
