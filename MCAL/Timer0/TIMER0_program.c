#include "std_types.h"
#include "BIT_MATH.h"

#include "TIMER1_private.h"

#include "TIMER0_interface.h"
#include "TIMER0_private.h"
#include "TIMER0_config.h"

void Timer0_voidInit(void)
{
    /*OVF mode - prescaler 8*/
    //TCCR0_REG = 0b00000010;
    TCCR0_REG = TIMER0_MODE | OC0_MODE | PRESCALLER_VALUE ;
}

void Timer0_voidDelay_us(u32 Copy_u32DelayTime)
{
    while(Copy_u32DelayTime >= TIMER0_OVER_FLOW_VALUE)
    {
        /*Set the value of the counter*/
        TCNT0_REG = 0;
        /*wait for the flag to be set*/
        while(GETBIT(TIFR_REG,TIMER0_OVF_FLAG_BIT) != 1);
        /*CLR the Flag */
        SETBIT(TIFR_REG,TIMER0_OVF_FLAG_BIT);
        Copy_u32DelayTime -= TIMER0_OVER_FLOW_VALUE;
    }

    if( Copy_u32DelayTime < TIMER0_OVER_FLOW_VALUE )
    {
        /*Set the value of the counter*/
        TCNT0_REG = TIMER0_OVER_FLOW_VALUE-Copy_u32DelayTime;
        /*wait for the flag to be set*/
        while(GETBIT(TIFR_REG,TIMER0_OVF_FLAG_BIT) != 1 );
        /*CLR the Flag */
        SETBIT(TIFR_REG,TIMER0_OVF_FLAG_BIT);
    }
}

void Timer0_voidSet_Duty_Cycle( u8 Copy_u8Duty_Cycle )
{
    TCNT0_REG = 0;
    #if TIMER0_MODE == FAST_PWM

        #if OC0_MODE == CLEAR_ON_COMPARE    /*NON_INVERTED*/

            OCR0_REG = ((Copy_u8Duty_Cycle*256)/100)-1;

        #elif  OC0_MODE ==                  /*INVERTED*/

            OCR0_REG = 255-((Copy_u8Duty_Cycle*256)/100);   

        #endif

    #elif  TIMER0_MODE == PHASE_CORRECT_PWM

        #if OC0_MODE == CLEAR_ON_COMPARE    /*NON_INVERTED*/

            OCR0_REG = ((Copy_u8Duty_Cycle*255)/100) ;

        #elif  OC0_MODE ==                  /*INVERTED*/

            OCR0_REG = 255-((Copy_u8Duty_Cycle*255)/100) ;  

        #endif

    #endif
}