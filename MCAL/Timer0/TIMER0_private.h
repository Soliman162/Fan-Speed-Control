#ifndef TIMER0_PRIVATE_H
#define TIMER0_PRIVATE_H


#define TCCR0_REG   *((volatile u8 *)0x53)
#define TCNT0_REG   *((volatile u8 *)0x52)
#define OCR0_REG    *((volatile u8 *)0x5C)

/*
#define TIMSK_REG       *((volatile u8 *)0x59)
#define TIFR_REG        *((volatile u8 *)0x58)
*/

#define TIMER0_OVER_FLOW_VALUE  256
#define TIMER0_OVF_FLAG_BIT     0

/************************************* TIMER MODES *************************************/
#define NORMAL                    0b00000000
#define CTC                       0b00001000
#define FAST_PWM                  0b01000000
#define PHASE_CORRECT_PWM         0b01001000
/***************************************************************************************/

/************************************* OC0 MODES *************************************/
#define DISCONNECTED              0b00000000
#define CLEAR_ON_COMPARE          0b00100000
#define SET_ON_COMPARE            0b00110000
/***************************************************************************************/

/************************************* Prescaller value *************************************/
#define NO_PRESCALLER             0b00000001
#define PRESCALLER_8              0b00000010
#define PRESCALLER_64             0b00000011
#define PRESCALLER_256            0b00000100
#define PRESCALLER_1024           0b00000101
/***************************************************************************************/



#endif