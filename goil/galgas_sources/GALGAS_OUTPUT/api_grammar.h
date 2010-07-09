//---------------------------------------------------------------------------*
//                                                                           *
//                           File 'api_grammar.h'                            *
//                        Generated by version 2.0.0                         *
//                       july 7th, 2010, at 17h15'58"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef GRAMMAR_api_5F_grammar_HAS_BEEN_DEFINED
#define GRAMMAR_api_5F_grammar_HAS_BEEN_DEFINED

//---------------------------------------------------------------------------*

#include "api_parser.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*

class C_Grammar_api_5F_grammar : public api_parser {
  public : virtual void nt_api_5F_section_ (C_Lexique_api_5F_scanner &,
                                            GGS_goilTemplateFieldMapList &) ;

  public : virtual void nt_api_5F_start_ (C_Lexique_api_5F_scanner &,
                                          GGS_goilTemplateVariableMap &) ;

  public : static void _performSourceFileParsing_ (C_Compiler & inCompiler,
                                                   const C_String & inDependancyExtension,
                                                   const C_String & inDependancyPath,
                                                   GGS_string * inSentStringPtr,
                                                   const GGS_lstring inFileName,
                                                   GGS_goilTemplateVariableMap &
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler & inCompiler,
                                                     GGS_string * inSentStringPtr,
                                                     const GGS_string inSourceString,
                                                     GGS_goilTemplateVariableMap &
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual PMSInt16 select_api_5F_parser_0 (C_Lexique_api_5F_scanner &) ;

  public : virtual PMSInt16 select_api_5F_parser_1 (C_Lexique_api_5F_scanner &) ;

  public : virtual PMSInt16 select_api_5F_parser_2 (C_Lexique_api_5F_scanner &) ;

  public : virtual PMSInt16 select_api_5F_parser_3 (C_Lexique_api_5F_scanner &) ;
} ;

//---------------------------------------------------------------------------*

#endif
