/******************************************************************************/
/* File   : Dlt.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Dlt.hpp"
#include "infDlt_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define DLT_AR_RELEASE_VERSION_MAJOR                                           4
#define DLT_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(DLT_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible DLT_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(DLT_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible DLT_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Dlt, DLT_VAR) Dlt;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, DLT_CODE) module_Dlt::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, DLT_CONST,       DLT_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   DLT_CONFIG_DATA, DLT_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Dlt_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstDlt_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == Dlt_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Dlt_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Dlt_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  DLT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, DLT_CODE) module_Dlt::DeInitFunction(
   void
){
#if(STD_ON == Dlt_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Dlt_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Dlt_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  DLT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, DLT_CODE) module_Dlt::MainFunction(
   void
){
#if(STD_ON == Dlt_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Dlt_InitCheck)
   }
   else{
#if(STD_ON == Dlt_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  DLT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, DLT_CODE) module_Dlt::dummy(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

