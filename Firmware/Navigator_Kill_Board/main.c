//includes
#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/timer.h"
#include "driverlib/uart.h"
#include "utils/uartstdio.h"

//mil includes
#include "MIL_CLK.h"

#define PORT_F_KILL_SW_PIN GPIO_PIN_4
#define PORT_A_KILL_SW_PIN GPIO_PIN_5
#define STBD_F_KILL_SW_PIN GPIO_PIN_6
#define STBD_A_KILL_SW_PIN GPIO_PIN_7

#define PORT_F_KILL_IND_PIN GPIO_PIN_0
#define PORT_A_KILL_IND_PIN GPIO_PIN_1
#define STBD_F_KILL_IND_PIN GPIO_PIN_2
#define STBD_A_KILL_IND_PIN GPIO_PIN_3

/*
 * Name: InitGPIOPins
 * Desc: Initializes all GPIO pins used for the Navigator Kill Board
 */
void InitGPIOPins();


int main(void)
{
	return 0;
}

void InitGPIOPins() {
    GPIOPinTypeGPIOInput(GPIO_PORTC_BASE, PORT_F_KILL_SW_PIN | PORT_A_KILL_SW_PIN | STBD_F_KILL_SW_PIN | STBD_A_KILL_SW_PIN);
    GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, PORT_F_KILL_IND_PIN | PORT_A_KILL_IND_PIN | STBD_F_KILL_IND_PIN | STBD_A_KILL_IND_PIN);
}
