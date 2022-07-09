/* **************file discription *********
* \ file:   Mcu_Hw.h
* \ Module: Mcu_Hw.h  
*******************************************/
#ifndef  MCU_HW_H
#include MCU_HW_H

/********************************************************
********************************************************
* include files
********************************************************
*/
#include "std_types.h"

/*******************************************************
 * GLOBAL DATA TYPE AND STRUCTURE
 * ****************************************************/
typedef struct
{
    uint32 VECACT    :8;
    uint32           :3;
    uint32 RETBASE   :1;
    uint32 VECPEND   :3;
    uint32           :2;
    uint32 ISRPEND   :1;
    uint32 ISRPRE    :1;
    uint32           :1;
    uint32 PENDSTCLR :1;
    uint32 PENDSTSET :1;
    uint32 UNPENDSV  :1;
    uint32 PENDSC    :1;
    uint32           :2;
    uint32 NMISET    :1;
}INTCRTL_BF;

typedef union Mcu_Hw
{
   uint32 R;
   INTCRTL_BF B;
}INTCRTL_Tag;



/********************************************************
 * Gloabal  constant
 * *****************************************************/
#define CORTEXM4_PERI_BASE_ADDRESS      0xE000E000
#define APINT                           *((volatile uint32*)(0xD0C + CORTEXM4_PERI_BASE_ADDRESS))
#define INTCRTL                         *((volatile uint32*)(0xD04 + CORTEXM4_PERI_BASE_ADDRESS))

//INTCRTL.R = 0X55
//OR
//INTCRTL.B.ISRPEND = 0X5

/********************************************************
 * Local Macro constant\function
 * ******************************************************/
 /*******************************************************
  * LOCAL DATA
  * ******************************************************/
 /********************************************************
  * GLOBAL DATA
  * ******************************************************/
 

  #endif /* Mcu_Hw.h */

 /*****************************************************************
  * END OF FILE: IntCtrl.h
  * ***************************************************************/