#pragma once
/******************************************************************************/
/* File   : ServiceDlt.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceDlt.hpp"
#include "CfgServiceDlt.hpp"
#include "ServiceDlt_core.hpp"
#include "infServiceDlt_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceDlt:
      INTERFACES_EXPORTED_DLT
      public abstract_module
   ,  public class_ServiceDlt_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceDlt_Type* lptrConst = (ConstServiceDlt_Type*)NULL_PTR;
      infServicePduRClient_Up infServicePduRClient_ServiceDlt;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, DLT_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, DLT_CONST,       DLT_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   DLT_CONFIG_DATA, DLT_APPL_CONST) lptrCfgModule
      );
      FUNC(void, DLT_CODE) DeInitFunction (void);
      FUNC(void, DLT_CODE) MainFunction   (void);
      DLT_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceDlt, DLT_VAR) ServiceDlt;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

