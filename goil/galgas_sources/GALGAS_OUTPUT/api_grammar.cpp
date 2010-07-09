//---------------------------------------------------------------------------*
//                                                                           *
//                          File 'api_grammar.cpp'                           *
//                        Generated by version 2.0.0                         *
//                       july 7th, 2010, at 17h15'58"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if CURRENT_LIBPM_VERSION != 820
  #error "This file has been compiled with a version of GALGAS that uses libpm version 820, different than the current version (CURRENT_LIBPM_VERSION) of libpm"
#endif

//---------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

#include "api_grammar.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//              L L ( 1 )    P R O D U C T I O N    R U L E S                *
//                                                                           *
//---------------------------------------------------------------------------*

#define TERMINAL(t)     ((t)+1)
#define NONTERMINAL(nt) ((-nt)-1)
#define END_PRODUCTION  (0)

static const PMSInt16 gProductions [] = {
// At index 0 : <api_start>, in file 'api_parser.ggs', line 27
  NONTERMINAL (2) // <select_api_5F_parser_0>
, END_PRODUCTION
// At index 2 : <api_section>, in file 'api_parser.ggs', line 73
, TERMINAL (C_Lexique_api_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (4) // <select_api_5F_parser_2>
, TERMINAL (C_Lexique_api_5F_scanner::kToken__7D_) // $}$
, TERMINAL (C_Lexique_api_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
//---- Added productions from 'select' and 'repeat' instructions
// At index 7 : <select_api_5F_parser_0>, in file 'api_parser.ggs', line 40
, END_PRODUCTION
// At index 8 : <select_api_5F_parser_0>, in file 'api_parser.ggs', line 40
, TERMINAL (C_Lexique_api_5F_scanner::kToken_idf) // $idf$
, NONTERMINAL (3) // <select_api_5F_parser_1>
, NONTERMINAL (1) // <api_section>
, NONTERMINAL (2) // <select_api_5F_parser_0>
, END_PRODUCTION
// At index 13 : <select_api_5F_parser_1>, in file 'api_parser.ggs', line 53
, TERMINAL (C_Lexique_api_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_api_5F_scanner::kToken_idf) // $idf$
, TERMINAL (C_Lexique_api_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 17 : <select_api_5F_parser_1>, in file 'api_parser.ggs', line 53
, END_PRODUCTION
// At index 18 : <select_api_5F_parser_2>, in file 'api_parser.ggs', line 76
, END_PRODUCTION
// At index 19 : <select_api_5F_parser_2>, in file 'api_parser.ggs', line 76
, TERMINAL (C_Lexique_api_5F_scanner::kToken_idf) // $idf$
, NONTERMINAL (5) // <select_api_5F_parser_3>
, TERMINAL (C_Lexique_api_5F_scanner::kToken__2D__3E_) // $->$
, TERMINAL (C_Lexique_api_5F_scanner::kToken_idf) // $idf$
, TERMINAL (C_Lexique_api_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (4) // <select_api_5F_parser_2>
, END_PRODUCTION
// At index 26 : <select_api_5F_parser_3>, in file 'api_parser.ggs', line 80
, TERMINAL (C_Lexique_api_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_api_5F_scanner::kToken_idf) // $idf$
, TERMINAL (C_Lexique_api_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 30 : <select_api_5F_parser_3>, in file 'api_parser.ggs', line 80
, END_PRODUCTION
// At index 31 : <>, in file '.ggs', line 0
, NONTERMINAL (0) // <api_start>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     P R O D U C T I O N    N A M E S                      *
//                                                                           *
//---------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames [11] = {
 {"<api_start>", "api_parser", 0}, // at index 0
 {"<api_section>", "api_parser", 2}, // at index 1
 {"<select_api_5F_parser_0>", "api_parser", 7}, // at index 2
 {"<select_api_5F_parser_0>", "api_parser", 8}, // at index 3
 {"<select_api_5F_parser_1>", "api_parser", 13}, // at index 4
 {"<select_api_5F_parser_1>", "api_parser", 17}, // at index 5
 {"<select_api_5F_parser_2>", "api_parser", 18}, // at index 6
 {"<select_api_5F_parser_2>", "api_parser", 19}, // at index 7
 {"<select_api_5F_parser_3>", "api_parser", 26}, // at index 8
 {"<select_api_5F_parser_3>", "api_parser", 30}, // at index 9
 {"<>", "", 31} // at index 10
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//            L L ( 1 )    P R O D U C T I O N    I N D E X E S              *
//                                                                           *
//---------------------------------------------------------------------------*

static const PMSInt16 gProductionIndexes [11] = {
0, // index 0 : <api_start>, in file 'api_parser.ggs', line 27
2, // index 1 : <api_section>, in file 'api_parser.ggs', line 73
7, // index 2 : <select_api_5F_parser_0>, in file 'api_parser.ggs', line 40
8, // index 3 : <select_api_5F_parser_0>, in file 'api_parser.ggs', line 40
13, // index 4 : <select_api_5F_parser_1>, in file 'api_parser.ggs', line 53
17, // index 5 : <select_api_5F_parser_1>, in file 'api_parser.ggs', line 53
18, // index 6 : <select_api_5F_parser_2>, in file 'api_parser.ggs', line 76
19, // index 7 : <select_api_5F_parser_2>, in file 'api_parser.ggs', line 76
26, // index 8 : <select_api_5F_parser_3>, in file 'api_parser.ggs', line 80
30, // index 9 : <select_api_5F_parser_3>, in file 'api_parser.ggs', line 80
31 // index 10 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//      L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S       *
//                                                                           *
//---------------------------------------------------------------------------*

static const PMSInt16 gFirstProductionIndexes [8] = {
0, // at 0 : <api_start>
1, // at 1 : <api_section>
2, // at 2 : <select_api_5F_parser_0>
4, // at 3 : <select_api_5F_parser_1>
6, // at 4 : <select_api_5F_parser_2>
8, // at 5 : <select_api_5F_parser_3>
10, // at 6 : <>
0} ;

//---------------------------------------------------------------------------*
//                                                                           *
//               L L ( 1 )    D E C I S I O N    T A B L E S                 *
//                                                                           *
//---------------------------------------------------------------------------*

static const PMSInt16 gDecision [] = {
// At index 0 : <api_start> only one production, no choice
  -1,
// At index 1 : <api_section> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 2 : <select_api_5F_parser_0>
C_Lexique_api_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_api_5F_scanner::kToken_idf, -1, // Choice 2
  -1,
// At index 7 : <select_api_5F_parser_1>
C_Lexique_api_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_api_5F_scanner::kToken__7B_, -1, // Choice 2
  -1,
// At index 12 : <select_api_5F_parser_2>
C_Lexique_api_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_api_5F_scanner::kToken_idf, -1, // Choice 2
  -1,
// At index 17 : <select_api_5F_parser_3>
C_Lexique_api_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_api_5F_scanner::kToken__2D__3E_, -1, // Choice 2
  -1,
// At index 22 : <> only one production, no choice
  -1,
0} ;

//---------------------------------------------------------------------------*
//                                                                           *
//       L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S        *
//                                                                           *
//---------------------------------------------------------------------------*

static const PMSInt16 gDecisionIndexes [8] = {
0, // at 0 : <api_start>
1, // at 1 : <api_section>
2, // at 2 : <select_api_5F_parser_0>
7, // at 3 : <select_api_5F_parser_1>
12, // at 4 : <select_api_5F_parser_2>
17, // at 5 : <select_api_5F_parser_3>
22, // at 6 : <>
0} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                 'api_start' non terminal implementation                   *
//                                                                           *
//---------------------------------------------------------------------------*

void C_Grammar_api_5F_grammar::
nt_api_5F_start_ (C_Lexique_api_5F_scanner & inLexique,
                                GGS_goilTemplateVariableMap & parameter_1) {
  rule_api_5F_parser_api_5F_start_i0_(inLexique, parameter_1) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                   Grammar start symbol implementation                     *
//                                                                           *
//---------------------------------------------------------------------------*

void C_Grammar_api_5F_grammar::_performSourceFileParsing_ (C_Compiler & inCompiler,
                                const C_String & inDependancyExtension,
                                const C_String & inDependancyPath,
                                GGS_string * inSentStringPtr,
                                const GGS_lstring inFilePath,
                                GGS_goilTemplateVariableMap & parameter_1
                                COMMA_LOCATION_ARGS) {
  const C_String sourceFileName = inFilePath.string ().isAbsolutePath ()
    ? inFilePath.string ()
    : inCompiler.sourceFileName ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (inFilePath.string ()) ;
  if (sourceFileName.fileExists ()) {
    C_Lexique_api_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_api_5F_scanner (& inCompiler, inDependancyExtension, inDependancyPath, inCompiler.ioParametersPtr (), sourceFileName COMMA_HERE)) ;
    macroRetainObject (scanner) ;
    if (scanner->needsCompiling ()) {
      if (scanner->sourceText () != NULL) {
        scanner->mPerformGeneration = inCompiler.mPerformGeneration ;
        const bool ok = scanner->performTopDownParsing (gProductions, gProductionNames, gProductionIndexes,
                                                         gFirstProductionIndexes, gDecision, gDecisionIndexes, 31) ;
        if (ok && ! scanner->mParseOnlyFlag) {
          C_Grammar_api_5F_grammar _grammar ;
          _grammar.nt_api_5F_start_ (*scanner, parameter_1) ;
          if (inSentStringPtr != NULL) {
            inSentStringPtr->dotAssign_operation (scanner->sentStringEX ()) ;
          }
        }
      }else{
        C_String message ;
        message << "the '" << sourceFileName << "' file exits, but cannot be read" ;
        inFilePath.signalSemanticError (inCompiler, message COMMA_THERE) ;
      }
    }
    macroReleaseObject (scanner) ;
  }else{
    C_String message ;
    message << "the '" << sourceFileName << "' file does not exist" ;
    inFilePath.signalSemanticError (inCompiler, message COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------*

void C_Grammar_api_5F_grammar::_performSourceStringParsing_ (C_Compiler & inCompiler,
                                GGS_string * inSentStringPtr,
                                const GGS_string inSourceString,
                                GGS_goilTemplateVariableMap & parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  C_Lexique_api_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_api_5F_scanner (& inCompiler, inCompiler.ioParametersPtr (), inSourceString.string (), "Error when parsing dynamic string" COMMA_HERE)) ;
  macroRetainObject (scanner) ;
  scanner->mPerformGeneration = inCompiler.mPerformGeneration ;
  const bool ok = scanner->performTopDownParsing (gProductions, gProductionNames, gProductionIndexes,
                                                   gFirstProductionIndexes, gDecision, gDecisionIndexes, 31) ;
  if (ok && ! scanner->mParseOnlyFlag) {
    C_Grammar_api_5F_grammar _grammar ;
    _grammar.nt_api_5F_start_ (*scanner, parameter_1) ;
    if (inSentStringPtr != NULL) {
      inSentStringPtr->dotAssign_operation (scanner->sentStringEX ()) ;
    }
  }
  macroReleaseObject (scanner) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                'api_section' non terminal implementation                  *
//                                                                           *
//---------------------------------------------------------------------------*

void C_Grammar_api_5F_grammar::
nt_api_5F_section_ (C_Lexique_api_5F_scanner & inLexique,
                                GGS_goilTemplateFieldMapList & parameter_1) {
  rule_api_5F_parser_api_5F_section_i1_(inLexique, parameter_1) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        'select_api_5F_parser_0' added non terminal implementation         *
//                                                                           *
//---------------------------------------------------------------------------*

PMSInt16 C_Grammar_api_5F_grammar::select_api_5F_parser_0 (C_Lexique_api_5F_scanner & inLexique) {
  return inLexique.nextProductionIndex () ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        'select_api_5F_parser_1' added non terminal implementation         *
//                                                                           *
//---------------------------------------------------------------------------*

PMSInt16 C_Grammar_api_5F_grammar::select_api_5F_parser_1 (C_Lexique_api_5F_scanner & inLexique) {
  return inLexique.nextProductionIndex () ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        'select_api_5F_parser_2' added non terminal implementation         *
//                                                                           *
//---------------------------------------------------------------------------*

PMSInt16 C_Grammar_api_5F_grammar::select_api_5F_parser_2 (C_Lexique_api_5F_scanner & inLexique) {
  return inLexique.nextProductionIndex () ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        'select_api_5F_parser_3' added non terminal implementation         *
//                                                                           *
//---------------------------------------------------------------------------*

PMSInt16 C_Grammar_api_5F_grammar::select_api_5F_parser_3 (C_Lexique_api_5F_scanner & inLexique) {
  return inLexique.nextProductionIndex () ;
}

//---------------------------------------------------------------------------*

