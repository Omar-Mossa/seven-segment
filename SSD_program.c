/***************************************************************************************/
/*********	Name	:	Omar Mossa	****************************************************/
/*********  Date	:	23/8/2020	****************************************************/
/*********	SWC		:	SSD			****************************************************/
/*********	Version	:	V1.5		****************************************************/
/***************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "SSD_config.h"
#include "SSD_private.h"
#include "SSD_interface.h"

#include "DIO_interface.h"






u8 SSD_u8DisplayNumber(u8 Copy_u8Number,u8 Copy_SSDNumber)
{
	u8 Local_u8ErrorStatus = OK ;

	if(Copy_u8Number <= 9 && Copy_SSDNumber <= 1)
	{
		switch(Copy_u8Number)
		{
			case 0 :
			if (SSD1 == Copy_SSDNumber)	
			{	
				/* Displaying On SSD 1 */

				if ((DIO_u8SetPortValue( SSD1_LED_PORT , ZERO)) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}
			else if (SSD2 == Copy_SSDNumber)
			{
				/* Displaying On SSD 2 */

				if (DIO_u8SetPortValue( SSD2_LED_PORT , ZERO) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}	
			break ;

			case 1 :
			if (SSD1 == Copy_SSDNumber)	
			{	
				/* Displaying On SSD 1 */
				
				if ((DIO_u8SetPortValue( SSD1_LED_PORT , ONE )) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}
			else if (SSD2 == Copy_SSDNumber)
			{
				/* Displaying On SSD 2 */

				if (DIO_u8SetPortValue( SSD2_LED_PORT , ONE ) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}	
			break ;

			case 2 :
			if (SSD1 == Copy_SSDNumber)	
			{	
				/* Displaying On SSD 1 */
				
				if ((DIO_u8SetPortValue( SSD1_LED_PORT , TWO)) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}
			else if (SSD2 == Copy_SSDNumber)
			{
				/* Displaying On SSD 2 */

				if (DIO_u8SetPortValue( SSD2_LED_PORT , TWO) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}	
			break ;

			case 3 :
			if (SSD1 == Copy_SSDNumber)	
			{	
				/* Displaying On SSD 1 */
				
				if ((DIO_u8SetPortValue( SSD1_LED_PORT , THREE)) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}
			else if (SSD2 == Copy_SSDNumber)
			{
				/* Displaying On SSD 2 */

				if (DIO_u8SetPortValue( SSD2_LED_PORT , THREE) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}	
			break ;

			case 4 :
			if (SSD1 == Copy_SSDNumber)	
			{	
				/* Displaying On SSD 1 */
				
				if ((DIO_u8SetPortValue( SSD1_LED_PORT , FOUR)) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}
			else if (SSD2 == Copy_SSDNumber)
			{
				/* Displaying On SSD 2 */

				if (DIO_u8SetPortValue( SSD2_LED_PORT , FOUR) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}	
			break ;

			case 5 :
			if (SSD1 == Copy_SSDNumber)	
			{	
				/* Displaying On SSD 1 */
				
				if ((DIO_u8SetPortValue( SSD1_LED_PORT , FIVE)) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}
			else if (SSD2 == Copy_SSDNumber)
			{
				/* Displaying On SSD 2 */

				if (DIO_u8SetPortValue( SSD2_LED_PORT , FIVE ) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}	
			break ;

			case 6 :
			if (SSD1 == Copy_SSDNumber)	
			{	
				/* Displaying On SSD 1 */
				
				if ((DIO_u8SetPortValue( SSD1_LED_PORT , SIX)) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}
			else if (SSD2 == Copy_SSDNumber)
			{
				/* Displaying On SSD 2 */

				if (DIO_u8SetPortValue( SSD2_LED_PORT , SIX) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}	
			break ;

			case 7 :
			if (SSD1 == Copy_SSDNumber)	
			{	
				/* Displaying On SSD 1 */
				
				if ((DIO_u8SetPortValue( SSD1_LED_PORT , SEVEN)) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}
			else if (SSD2 == Copy_SSDNumber)
			{
				/* Displaying On SSD 2 */

				if (DIO_u8SetPortValue( SSD2_LED_PORT , SEVEN) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}	
			break ;

			case 8 :
			if (SSD1 == Copy_SSDNumber)	
			{	
				/* Displaying On SSD 1 */
				
				if ((DIO_u8SetPortValue( SSD1_LED_PORT , EIGHT)) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}
			else if (SSD2 == Copy_SSDNumber)
			{
				/* Displaying On SSD 2 */

				if (DIO_u8SetPortValue( SSD2_LED_PORT , EIGHT) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}	
			break ;

			case 9 :
			if (SSD1 == Copy_SSDNumber)	
			{	
				/* Displaying On SSD 1 */
				
				if ((DIO_u8SetPortValue( SSD1_LED_PORT , NINE)) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}
			else if (SSD2 == Copy_SSDNumber)
			{
				/* Displaying On SSD 2 */

				if (DIO_u8SetPortValue( SSD2_LED_PORT , NINE) == 1)
				{
					/* Error in setting the port value */
					Local_u8ErrorStatus = NOK ;
				}
			}	
			break ;
		}
	}
	else
	{
		Local_u8ErrorStatus = NOK ;
	}

	return Local_u8ErrorStatus ;
}

u8 SSD_u8TurnOn(u8 Copy_SSDNumber)
{
	u8 Local_u8ErrorStatus = OK ;

	if (SSD1 == Copy_SSDNumber)
	{
		/**** turn on SSD 1 ****/

		if(DIO_u8SetPinValue( SSD1_COM_ANODE_PORT , SSD1_COM_ANODE_PIN , OUTPUT_HIGH ) == 1)
		{
			Local_u8ErrorStatus = NOK ;
		}
	}
	
	else if (SSD2 == Copy_SSDNumber)
	{
		/**** turn on SSD 2 ****/

		if(DIO_u8SetPinValue( SSD2_COM_ANODE_PORT , SSD2_COM_ANODE_PIN , OUTPUT_HIGH ) == 1)
		{
			Local_u8ErrorStatus = NOK ;
		}
	}	

	return Local_u8ErrorStatus ;
}

u8 SSD_u8TurnOff(u8 Copy_SSDNumber)
{
	u8 Local_u8ErrorStatus = OK ;

	if (SSD1 == Copy_SSDNumber)
	{
		/**** turn OFF SSD 1 ****/

		if(DIO_u8SetPinValue( SSD1_COM_ANODE_PORT , SSD1_COM_ANODE_PIN , OUTPUT_LOW ) == 1)
		{
			Local_u8ErrorStatus = NOK ;
		}
	}
	
	else if (SSD2 == Copy_SSDNumber)
	{
		/**** turn OFF SSD 2 ****/

		if(DIO_u8SetPinValue( SSD2_COM_ANODE_PORT , SSD2_COM_ANODE_PIN , OUTPUT_LOW ) == 1)
		{
			Local_u8ErrorStatus = NOK ;
		}
	}	

	return Local_u8ErrorStatus ;
}