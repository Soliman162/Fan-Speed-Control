#include "std_types.h"
#include "SERVICES.h"

#include "DIO_interface.h"
#include "TIMER0_interface.h"

#include "DC_motor_interface.h"
#include "DC_motor_private.h"
#include "DC_motor_config.h"


void DC_Motor_voidInit(void)
{
    Timer0_voidInit();

    SetPin_enumDirection(DC_MOTOR_PORT, DC_MOTOR_CW_PIN, DIO_OUTPUT);
    SetPin_enumDirection(DC_MOTOR_PORT, DC_MOTOR_CCW_PIN, DIO_OUTPUT);

    SetPin_enumValue(DC_MOTOR_PORT, DC_MOTOR_CW_PIN, DIO_LOW);
    SetPin_enumValue(DC_MOTOR_PORT, DC_MOTOR_CCW_PIN, DIO_LOW);
}
void DC_Motor_voidRotate( Rotate_enumDirection Copy_enumDirection, u8 Copy_u8Speed)
{
    Timer0_voidSet_Duty_Cycle(Copy_u8Speed);

    switch (Copy_enumDirection)
    {
        case CLOCK_WISE:

            SetPin_enumValue(DC_MOTOR_PORT, DC_MOTOR_CW_PIN, DIO_HIGH);
            SetPin_enumValue(DC_MOTOR_PORT, DC_MOTOR_CCW_PIN, DIO_LOW);
            break;
        
        case COUNTER_CLOCK_WISE:

            SetPin_enumValue(DC_MOTOR_PORT, DC_MOTOR_CW_PIN, DIO_LOW);
            SetPin_enumValue(DC_MOTOR_PORT, DC_MOTOR_CCW_PIN, DIO_HIGH);
            break;
    }

}
void DC_Motor_voidStop(void)
{
    SetPin_enumValue(DC_MOTOR_PORT, DC_MOTOR_CW_PIN, DIO_LOW);
    SetPin_enumValue(DC_MOTOR_PORT, DC_MOTOR_CW_PIN, DIO_LOW);
}