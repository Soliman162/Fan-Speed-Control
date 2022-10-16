#include "std_types.h"
#include "BIT_MATH.h"
#include "SERVICES.h"

#include "DIO_interface.h"
#include "TIMER0_interface.h"
#include "ADC_interface.h"

#include "DC_motor_interface.h"
#include "CLCD_interface.h"
#include "LM35_interface.h"

#define ON      "ON"
#define OFF     "OFF"

int main(void)
{
/************************Init the system*********************/
    Init_voidSystem();
/***********************************************************/

    u8 *Fan_ptru8State = OFF;
    u8 Temperature_u8 = 0;

    CLCD_voidInit();
    DC_Motor_voidInit();
    LM35_voidInit();

    while(1)
    {
        Temperature_u8 = LM35_u32Read_Temp();

        CLCD_voidSetPosition (CLCD_ROW_1 , CLCD_COL_1);
        CLCD_voidSend_String("Fan is ");
        CLCD_voidSend_String(Fan_ptru8State);
        CLCD_voidSetPosition (CLCD_ROW_2 , CLCD_COL_1);
        CLCD_voidSend_String((u8 *)"Temp = ");
        CLCD_void_Send_Number(Temperature_u8);

        Fan_ptru8State = ON;

        if( Temperature_u8 < 30 )
        {
            DC_Motor_voidStop();
            Fan_ptru8State = OFF;
        }else if ( Temperature_u8 >= 120 )
        {
            DC_Motor_voidRotate(CLOCK_WISE, 100);
        }else if ( Temperature_u8 >= 90 )
        {
            DC_Motor_voidRotate(CLOCK_WISE, 75);
        }else if ( Temperature_u8 >= 60 )
        {
            DC_Motor_voidRotate(CLOCK_WISE, 50);
        }else if ( Temperature_u8 >= 30  )
        {
            DC_Motor_voidRotate(CLOCK_WISE, 25);
        }
    }

    return 0;
}
