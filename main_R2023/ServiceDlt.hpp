#pragma once
/******************************************************************************/
/* File   : ServiceDlt.hpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceDlt_ServiceNvM_Types.hpp"
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
      INTERFACES_EXPORTED_SERVICEDLT
      public abstract_module
   ,  public class_ServiceDlt_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;
      infServicePduRClient_Up infServicePduRClient_ServiceDlt;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICEDLT_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICEDLT_CONST,       SERVICEDLT_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEDLT_CONFIG_DATA, SERVICEDLT_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICEDLT_CODE) DeInitFunction (void);
      FUNC(void, SERVICEDLT_CODE) MainFunction   (void);
      SERVICEDLT_CORE_FUNCTIONALITIES
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
extern VAR(module_ServiceDlt, SERVICEDLT_VAR) ServiceDlt;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

