/***************************************************************************************/
/*********	Name	:	Omar Mossa	****************************************************/
/*********  Date	:	23/8/2020	****************************************************/
/*********	SWC		:	SSD			****************************************************/
/*********	Version	:	V1.5		****************************************************/
/***************************************************************************************/


#ifndef SSD_config_h
#define SSD_config_h

/************************************** VERRY IMPORTANT *************************************/

/* IN WIRING THE COMMON ANODE SEVEN SEGMENT HAS TO BE AS FOLLOWS:

	A -------> PIN0
	B -------> PIN1
	C -------> PIN2
	D -------> PIN3
	E -------> PIN4
	F -------> PIN5
	G -------> PIN6
	H(DOT) --> PIN7

*/	


/***

OPTIONS :

FOR PORTS :

1- DIO_PORTA_ID     	(DEFAULT FOR LEDS)
2- DIO_PORTB_ID			(DEFAULT FOR COMMON ANODE)
3- DIO_PORTC_ID
4- DIO_PORTD_ID


FOR PINS :

1- PIN0					(DEFAULT)
2- PIN1
3- PIN2
4- PIN3
5- PIN4
6- PIN5
7- PIN6

***/



/**** COMMON ANODE SSD1 WIRING ****/

#define SSD1_LED_PORT 				DIO_PORTA_ID

#define SSD1_COM_ANODE_PORT			DIO_PORTB_ID
#define SSD1_COM_ANODE_PIN			PIN0


/**** COMMON ANODE SSD2 WIRING ****/

#define SSD2_LED_PORT 				DIO_PORTA_ID

#define SSD2_COM_ANODE_PORT			DIO_PORTB_ID
#define SSD2_COM_ANODE_PIN			PIN0




 
 


#endif