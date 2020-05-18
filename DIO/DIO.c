/*written by : Mina Nashaat */

#include "BIT_MATH.h"
#include "STY_TYPES.h"
#include "DIO.h"


void DIO_SetPinDirection(u8 u8PortIdCopy , u8 u8PinIdCopy , u8 u8PinDirCopy )
{
    if ((u8PortIdCopy<=PORTD) && (u8PinIdCopy<=PIN7))
    {
        if (u8PinDirCopy == OUTPUT)
        {
            switch(u8PortIdCopy)
              {
                case PORTA: SET_BIT(DDRA_Register,u8PinIdCopy);
                break;
                case PORTB: SET_BIT(DDRB_Register,u8PinIdCopy);
                break;
                case PORTC: SET_BIT(DDRC_Register,u8PinIdCopy);
                break;
                case PORTD: SET_BIT(DDRD_Register,u8PinIdCopy);
                break;
               } 
        }
        else if (u8PinDirCopy == INPUT)
        {
            switch(u8PortIdCopy)
               {
                case PORTA: CLR_BIT(DDRA_Register,u8PinIdCopy);
                  break;
                case PORTB: CLR_BIT(DDRB_Register,u8PinIdCopy);
                  break;
                case PORTC: CLR_BIT(DDRC_Register,u8PinIdCopy);
                 break;
                case PORTD: CLR_BIT(DDRD_Register,u8PinIdCopy);
                 break;
               }            
        }
        else
        {
            /* error */
        }
    }
    else{
        /* error */
    }
}

void DIO_SetPinValue(u8 u8PortIdCopy , u8 u8PinIdCopy, u8 u8PinValCopy)
{
if ((u8PortIdCopy<=PORTD) && (u8PinIdCopy<=PIN7))
    {
        if (u8PinValCopy == HIGH)
        {
            switch(u8PortIdCopy)
                {
                case PORTA: SET_BIT(PORTA_Register,u8PinIdCopy);
                 break;
                case PORTB: SET_BIT(PORTB_Register,u8PinIdCopy);
                 break;
                case PORTC: SET_BIT(PORTC_Register,u8PinIdCopy);
                 break;
                case PORTD: SET_BIT(PORTD_Register,u8PinIdCopy);
                 break;
                }
        }
        else if (u8PinValCopy == LOW)
        {
            switch(u8PortIdCopy)
                {
                case PORTA: CLR_BIT(PORTA_Register,u8PinIdCopy);
                 break;
                case PORTB: CLR_BIT(PORTB_Register,u8PinIdCopy);
                  break;
                case PORTC: CLR_BIT(PORTC_Register,u8PinIdCopy);
                 break;
                case PORTD: CLR_BIT(PORTD_Register,u8PinIdCopy);
                 break;
                }

        }
        else
        {
            /* error */
        }
    }
    else{
        /* error */
    }
}

void DIO_GetPinValue(u8 u8PortIdCopy, u8 u8PinIdCopy)
{
   u8 u8ResultLocal;
    if ((u8PortIdCopy<=PORTD) && (u8PinIdCopy<=PIN7))
    { 
         

         switch(u8PortIdCopy)
         {
         case PORTA: u8ResultLocal=GET_BIT(PINA_Register,u8PinIdCopy);
         break;
         case PORTB: u8ResultLocal=GET_BIT(PINB_Register,u8PinIdCopy);
         break;
         case PORTC: u8ResultLocal=GET_BIT(PINC_Register,u8PinIdCopy); 
         break;
         case PORTD: u8ResultLocal=GET_BIT(PIND_Register,u8PinIdCopy); 
          break;
          }
    }
    else
        {
            /* error */
        }
        return(u8ResultLocal);

}
void DIO_int(void)
 {
     /* direction PORTA */
      DIO_SetPinDirection(PORTA , PIN0 , DIR_PORTA_PIN0 );
      DIO_SetPinDirection(PORTA , PIN1 , DIR_PORTA_PIN1 );
      DIO_SetPinDirection(PORTA , PIN2 , DIR_PORTA_PIN2 );
      DIO_SetPinDirection(PORTA , PIN3 , DIR_PORTA_PIN3 );
      DIO_SetPinDirection(PORTA , PIN4 , DIR_PORTA_PIN4 );
      DIO_SetPinDirection(PORTA , PIN5 , DIR_PORTA_PIN5 );
      DIO_SetPinDirection(PORTA , PIN6 , DIR_PORTA_PIN6 );
      DIO_SetPinDirection(PORTA , PIN7 , DIR_PORTA_PIN7 );
      
/* direction PORTB */
      DIO_SetPinDirection(PORTB , PIN0 , DIR_PORTB_PIN0 );
      DIO_SetPinDirection(PORTB , PIN1 , DIR_PORTB_PIN1 );
      DIO_SetPinDirection(PORTB , PIN2 , DIR_PORTB_PIN2 );
      DIO_SetPinDirection(PORTB , PIN3 , DIR_PORTB_PIN3 );
      DIO_SetPinDirection(PORTB , PIN4 , DIR_PORTB_PIN4 );
      DIO_SetPinDirection(PORTB , PIN5 , DIR_PORTB_PIN5 );
      DIO_SetPinDirection(PORTB , PIN6 , DIR_PORTB_PIN6 );
      DIO_SetPinDirection(PORTB , PIN7 , DIR_PORTB_PIN7 );
/* direction PORTC */
      DIO_SetPinDirection(PORTC , PIN0 , DIR_PORTC_PIN0 );
      DIO_SetPinDirection(PORTC , PIN1 , DIR_PORTC_PIN1 );
      DIO_SetPinDirection(PORTC , PIN2 , DIR_PORTC_PIN2 );
      DIO_SetPinDirection(PORTC , PIN3 , DIR_PORTC_PIN3 );
      DIO_SetPinDirection(PORTC , PIN4 , DIR_PORTC_PIN4 );
      DIO_SetPinDirection(PORTC , PIN5 , DIR_PORTC_PIN5 );
      DIO_SetPinDirection(PORTC , PIN6 , DIR_PORTC_PIN6 );
      DIO_SetPinDirection(PORTC , PIN7 , DIR_PORTC_PIN7 );
/* direction PORTD */
      DIO_SetPinDirection(PORTD , PIN0 , DIR_PORTD_PIN0 );
      DIO_SetPinDirection(PORTD , PIN1 , DIR_PORTD_PIN1 );
      DIO_SetPinDirection(PORTD , PIN2 , DIR_PORTD_PIN2 );
      DIO_SetPinDirection(PORTD , PIN3 , DIR_PORTD_PIN3 );
      DIO_SetPinDirection(PORTD , PIN4 , DIR_PORTD_PIN4 );
      DIO_SetPinDirection(PORTD , PIN5 , DIR_PORTD_PIN5 );
      DIO_SetPinDirection(PORTD , PIN6 , DIR_PORTD_PIN6 );
      DIO_SetPinDirection(PORTD , PIN7 , DIR_PORTD_PIN7 );
/* value PORTA */
      DIO_SetPinValue(PORTA , PIN0 , val_PORTA_PIN0 );
      DIO_SetPinValue(PORTA , PIN1 , val_PORTA_PIN1 );
      DIO_SetPinValue(PORTA , PIN2 , val_PORTA_PIN2 );
      DIO_SetPinValue(PORTA , PIN3 , val_PORTA_PIN3 );
      DIO_SetPinValue(PORTA , PIN4 , val_PORTA_PIN4 );
      DIO_SetPinValue(PORTA , PIN5 , val_PORTA_PIN5 );
      DIO_SetPinValue(PORTA , PIN6 , val_PORTA_PIN6 );
      DIO_SetPinValue(PORTA , PIN7 , val_PORTA_PIN7 );
/* value PORTB */
      DIO_SetPinValue(PORTB , PIN0 , val_PORTB_PIN0 );
      DIO_SetPinValue(PORTB , PIN1 , val_PORTB_PIN1 );
      DIO_SetPinValue(PORTB , PIN2 , val_PORTB_PIN2 );
      DIO_SetPinValue(PORTB , PIN3 , val_PORTB_PIN3 );
      DIO_SetPinValue(PORTB , PIN4 , val_PORTB_PIN4 );
      DIO_SetPinValue(PORTB , PIN5 , val_PORTB_PIN5 );
      DIO_SetPinValue(PORTB , PIN6 , val_PORTB_PIN6 );
      DIO_SetPinValue(PORTB , PIN7 , val_PORTB_PIN7 );
/* value PORTC */
      DIO_SetPinValue(PORTC , PIN0 , val_PORTC_PIN0 );
      DIO_SetPinValue(PORTC , PIN1 , val_PORTC_PIN1 );
      DIO_SetPinValue(PORTC , PIN2 , val_PORTC_PIN2 );
      DIO_SetPinValue(PORTC , PIN3 , val_PORTC_PIN3 );
      DIO_SetPinValue(PORTC , PIN4 , val_PORTC_PIN4 );
      DIO_SetPinValue(PORTC , PIN5 , val_PORTC_PIN5 );
      DIO_SetPinValue(PORTC , PIN6 , val_PORTC_PIN6 );
      DIO_SetPinValue(PORTC , PIN7 , val_PORTC_PIN7 );
/* value PORTD */
      DIO_SetPinValue(PORTD , PIN0 , val_PORTD_PIN0 );
      DIO_SetPinValue(PORTD , PIN1 , val_PORTD_PIN1 );
      DIO_SetPinValue(PORTD , PIN2 , val_PORTD_PIN2 );
      DIO_SetPinValue(PORTD , PIN3 , val_PORTD_PIN3 );
      DIO_SetPinValue(PORTD , PIN4 , val_PORTD_PIN4 );
      DIO_SetPinValue(PORTD , PIN5 , val_PORTD_PIN5 );
      DIO_SetPinValue(PORTD , PIN6 , val_PORTD_PIN6 );
      DIO_SetPinValue(PORTD , PIN7 , val_PORTD_PIN7 );
     
       }