#include "std_types.h"
#include "BIT_MATH.h"

#include "TIMER1_interface.h"

#include "SERVICES.h"
#include "private.h"
#include "Config.h"

static inline void CPU_Core_voidEnable_INTERRUPT(void)
{
    #if GLOBAL_INTERRUPT_STATE == ENABLE
        SETBIT(STATUS_REG,ENABLE_INTERRUPT_BIT_NUM);
    #elif GLOBAL_INTERRUPT_STATE == DISABLE
        CLRBIT(STATUS_REG,ENABLE_INTERRUPT_BIT_NUM);
    #endif
}

void Init_voidSystem(void)
{
    CPU_Core_voidEnable_INTERRUPT();
    Timer1_voidInit();

}


