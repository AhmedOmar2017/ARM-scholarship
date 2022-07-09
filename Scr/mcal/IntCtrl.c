/* **************file discription *********
* \ file 
* \ brief 


********************************************************
********************************************************
* include files
********************************************************
*/
#include "std_types.h"
#include "IntCtrl.h"
# include "Mcu_Hw.h"

/********************************************************
 * Local Macro constant\function
 * ******************************************************/
 /*******************************************************
  * LOCAL DATA
  * ******************************************************/
 /********************************************************
  * GLOBAL DATA
  * ******************************************************/
 /********************************************************
  * LOCAL FUNCTION
  * ******************************************************/
 /********************************************************
  * GLOBAL FUNCTION
  * ******************************************************/


 /********************************************************
  * \Syntax          : void IntCrtl_Init (void)
  * \Discription     : initialize Nvic/SCB Module by parsing the configtion
  *                 into Nvic/SCB registers
  * 
  * \Sync\Async      : Syncronous
  * \Reentrancy      : Non Reentrant
  * \Parametars (in) : none
  * \Parametars (out): none
  * *******************************************************/

 void IntCtrl_Init (void)
 {
     /*  TODO: configure crouping/subgrouping system in APINT register in SCB*/
     /*  TODO: enable/disable base on user configration in NVIC_ENx and SCB_Sys registers*/
     /*  TODO: Assign group/subgroup periorty in NVIC_PRIx Nvic and SCB_SYSPRIx Register*/
 }

 /*****************************************************************
  * END OF FILE: IntCtrl.c
  * ***************************************************************/