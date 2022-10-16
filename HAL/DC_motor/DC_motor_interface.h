#ifndef DC_MOTOR_INTERFACE_H
#define DC_MOTOR_INTERFACE_H

typedef enum
{
    CLOCK_WISE,
    COUNTER_CLOCK_WISE

}Rotate_enumDirection;


void DC_Motor_voidInit(void);
void DC_Motor_voidStop(void);
void DC_Motor_voidRotate( Rotate_enumDirection Copy_enumDirection, u8 Copy_u8Speed);





#endif // !DC_MOTOR_INTERFACE_H