//---------------------------------------------------------------------------*
//                                                                           *
//                           File 'cfg_syntax.h'                             *
//                        Generated by version 2.0.0                         *
//                       july 7th, 2010, at 17h17'10"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef cfg_syntax_DEFINED
#define cfg_syntax_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/GGS__header.h"
#include "cfg_lexique.h"

//---------------------------------------------------------------------------*

// Include imported semantics
#include "cfg_types.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                   Parser class cfg_syntax declaration                     *
//                                                                           *
//---------------------------------------------------------------------------*

class cfg_syntax {
  public : virtual ~cfg_syntax (void) {}

  protected : virtual void nt_cfg_5F_start_ (C_Lexique_cfg_5F_lexique &,
                                GGS_config  &) = 0 ;

  protected : virtual void nt_cfg_5F_attrs_ (C_Lexique_cfg_5F_lexique &,
                                GGS_cfg_attrs  &) = 0 ;

  protected : virtual void nt_interrupts_ (C_Lexique_cfg_5F_lexique &,
                                GGS_basic_type  &) = 0 ;

  protected : void rule_cfg_5F_syntax_cfg_5F_start_i0_ (C_Lexique_cfg_5F_lexique &,
                                GGS_config  &) ;

  protected : virtual PMSInt16 select_cfg_5F_syntax_0 (C_Lexique_cfg_5F_lexique &) = 0 ;

  protected : void rule_cfg_5F_syntax_cfg_5F_attrs_i1_ (C_Lexique_cfg_5F_lexique &,
                                GGS_cfg_attrs  &) ;

  protected : virtual PMSInt16 select_cfg_5F_syntax_1 (C_Lexique_cfg_5F_lexique &) = 0 ;

  protected : void rule_cfg_5F_syntax_interrupts_i2_ (C_Lexique_cfg_5F_lexique &,
                                GGS_basic_type  &) ;

  protected : virtual PMSInt16 select_cfg_5F_syntax_2 (C_Lexique_cfg_5F_lexique &) = 0 ;

} ;

//---------------------------------------------------------------------------*

#endif
