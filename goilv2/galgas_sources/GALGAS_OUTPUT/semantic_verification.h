//-----------------------------------------------------------------------------*
//                                                                             *
//                       File 'semantic_verification.h'                        *
//                         Generated by version 2.6.0                          *
//                     september 23th, 2014, at 10h27'42"                      *
//                                                                             *
//-----------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef semantic_verification_ENTITIES_DEFINED
#define semantic_verification_ENTITIES_DEFINED

//-----------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//-----------------------------------------------------------------------------*

#include "goil_types_root.h"
#include "goil_basic_types.h"
#include "goil_routines.h"
#include "implementation_types.h"

//-----------------------------------------------------------------------------*


//-----------------------------------------------------------------------------*
//                                                                             *
//                       Function 'attributeAllowsAuto'                        *
//                                                                             *
//-----------------------------------------------------------------------------*

GALGAS_bool function_attributeAllowsAuto (const GALGAS_impType & constinArgument0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//-----------------------------------------------------------------------------*
//                                                                             *
//                        Routine 'verifyAllAttributes'                        *
//                                                                             *
//-----------------------------------------------------------------------------*

void routine_verifyAllAttributes (const GALGAS_implementation constinArgument0,
                                  const GALGAS_objectsMap constinArgument1,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//-----------------------------------------------------------------------------*
//                                                                             *
//                             Routine 'verifyAll'                             *
//                                                                             *
//-----------------------------------------------------------------------------*

void routine_verifyAll (const GALGAS_implementation constinArgument0,
                        const GALGAS_applicationDefinition constinArgument1,
                        C_Compiler * inCompiler
                        COMMA_LOCATION_ARGS) ;

//-----------------------------------------------------------------------------*
//                                                                             *
//             Category method '@implementation verifyApplication'             *
//                                                                             *
//-----------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_implementation_verifyApplication) (const cPtr_implementation * inObject,
                                                                          const GALGAS_applicationDefinition constinArgument0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//-----------------------------------------------------------------------------*

void enterCategoryMethod_verifyApplication (const int32_t inClassIndex,
                                            categoryMethodSignature_implementation_verifyApplication inMethod) ;

//-----------------------------------------------------------------------------*

void callCategoryMethod_verifyApplication (const cPtr_implementation * inObject,
                                           const GALGAS_applicationDefinition constin_appDef,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//-----------------------------------------------------------------------------*
//                                                                             *
//          Category method '@implementationObject verifyApplication'          *
//                                                                             *
//-----------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_implementationObject_verifyApplication) (const cPtr_implementationObject * inObject,
                                                                                const GALGAS_objectKind constinArgument0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//-----------------------------------------------------------------------------*

void enterCategoryMethod_verifyApplication (const int32_t inClassIndex,
                                            categoryMethodSignature_implementationObject_verifyApplication inMethod) ;

//-----------------------------------------------------------------------------*

void callCategoryMethod_verifyApplication (const cPtr_implementationObject * inObject,
                                           const GALGAS_objectKind constin_objectsOfKind,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//-----------------------------------------------------------------------------*
//                                                                             *
//                Category method '@impType verifyApplication'                 *
//                                                                             *
//-----------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_impType_verifyApplication) (const cPtr_impType * inObject,
                                                                   const GALGAS_objectAttributes constinArgument0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//-----------------------------------------------------------------------------*

void enterCategoryMethod_verifyApplication (const int32_t inClassIndex,
                                            categoryMethodSignature_impType_verifyApplication inMethod) ;

//-----------------------------------------------------------------------------*

void callCategoryMethod_verifyApplication (const cPtr_impType * inObject,
                                           const GALGAS_objectAttributes constin_attrs,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//-----------------------------------------------------------------------------*
//                                                                             *
//                    Category method '@impType verifyType'                    *
//                                                                             *
//-----------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_impType_verifyType) (const cPtr_impType * inObject,
                                                            const GALGAS_object_5F_t constinArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//-----------------------------------------------------------------------------*

void enterCategoryMethod_verifyType (const int32_t inClassIndex,
                                     categoryMethodSignature_impType_verifyType inMethod) ;

//-----------------------------------------------------------------------------*

void callCategoryMethod_verifyType (const cPtr_impType * inObject,
                                    const GALGAS_object_5F_t constin_attr,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//-----------------------------------------------------------------------------*
//                                                                             *
//                Category method '@impType verifyMultipleType'                *
//                                                                             *
//-----------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_impType_verifyMultipleType) (const cPtr_impType * inObject,
                                                                    const GALGAS_object_5F_t constinArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//-----------------------------------------------------------------------------*

void enterCategoryMethod_verifyMultipleType (const int32_t inClassIndex,
                                             categoryMethodSignature_impType_verifyMultipleType inMethod) ;

//-----------------------------------------------------------------------------*

void callCategoryMethod_verifyMultipleType (const cPtr_impType * inObject,
                                            const GALGAS_object_5F_t constin_attr,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

#endif
