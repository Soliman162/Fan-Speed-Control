#ifndef TIMER0_CONFIG_H
#define TIMER0_CONFIG_H

/**
 * Options:-
 * 
 *      NORMAL              
 *      CTC                 
 *      FAST_PWM            
 *      PHASE_CORRECT_PWM   
 */
#define TIMER0_MODE     FAST_PWM

/**
 * 
 * Options:-
 * 
 *      DISCONNECTED    
 *      CLEAR_ON_COMPARE       //non Inverted PWM
 *      SET_ON_COMPARE         //Inverted PWM
 * 
 */
#define OC0_MODE  CLEAR_ON_COMPARE  

/**
 * OPtions:-
 * 
 *       NO_PRESCALLER  
 *       PRESCALLER_8   
 *       PRESCALLER_64  
 *       PRESCALLER_256 
 *       PRESCALLER_1024
 */
#define PRESCALLER_VALUE    PRESCALLER_64


#endif