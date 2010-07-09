//---------------------------------------------------------------------------*
//                                                                           *
//                         File 'goil_obj_isr.cpp'                           *
//                        Generated by version 2.0.0                         *
//                       july 7th, 2010, at 17h16'47"                        *
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

#include <typeinfo>
#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "galgas/C_galgas_CLI_Options.h"
#include "goil_obj_isr.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_obj_isr.gSyntax", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                 Implementation of production rule 'isr'                   *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_isr::rule_goil_5F_obj_5F_isr_isr_i0_ (C_Lexique_goil_5F_lexique & inLexique,
                                GGS_isr_map  &var_cas_isrs) {
  GGS_lstring  var_cas_isr_name ;
  GGS_isr_obj  var_cas_isr ;
  GGS_basic_type  var_cas_category ;
  GGS_basic_type  var_cas_priority ;
  GGS_lstring  var_cas_desc ;
  GGS_lstringlist  var_cas_resources ;
  GGS_lstringlist  var_cas_messages ;
  GGS_lstringlist  var_cas_acc_apps ;
  GGS_timing_prot  var_cas_timing_prot ;
  GGS_ident_map  var_cas_other_fields ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_ISR) COMMA_HERE) ;
  inLexique.assignFromAttribute_att_5F_token (var_cas_isr_name) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
  const GGS_bool cond_2183 = var_cas_isrs.reader_hasKey (var_cas_isr_name.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (87))) ;
  if (cond_2183.isBuiltAndTrue ()) {
    var_cas_isrs.modifier_del (inLexique, var_cas_isr_name, var_cas_isr COMMA_SOURCE_FILE_AT_LINE (88)) ;
    var_cas_category = var_cas_isr.reader_category (inLexique COMMA_SOURCE_FILE_AT_LINE (89)) ;
    var_cas_priority = var_cas_isr.reader_priority (inLexique COMMA_SOURCE_FILE_AT_LINE (90)) ;
    var_cas_desc = var_cas_isr.reader_desc (inLexique COMMA_SOURCE_FILE_AT_LINE (91)) ;
    var_cas_resources = var_cas_isr.reader_resources (inLexique COMMA_SOURCE_FILE_AT_LINE (92)) ;
    var_cas_messages = var_cas_isr.reader_messages (inLexique COMMA_SOURCE_FILE_AT_LINE (93)) ;
    var_cas_acc_apps = var_cas_isr.reader_acc_apps (inLexique COMMA_SOURCE_FILE_AT_LINE (94)) ;
    var_cas_timing_prot = var_cas_isr.reader_timing_prot (inLexique COMMA_SOURCE_FILE_AT_LINE (95)) ;
    var_cas_other_fields = var_cas_isr.reader_other_fields (inLexique COMMA_SOURCE_FILE_AT_LINE (96)) ;
  }else if (cond_2183.isBuiltAndFalse ()) {
    var_cas_category = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_SOURCE_FILE_AT_LINE (98)) ;
    var_cas_priority = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_SOURCE_FILE_AT_LINE (99)) ;
    var_cas_desc = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_SOURCE_FILE_AT_LINE (100)) ;
    var_cas_resources = GGS_lstringlist ::constructor_emptyList () ;
    var_cas_messages = GGS_lstringlist ::constructor_emptyList () ;
    var_cas_acc_apps = GGS_lstringlist ::constructor_emptyList () ;
    var_cas_timing_prot = GGS_void_timing_prot ::constructor_new (inLexique, GGS_location (inLexique) COMMA_SOURCE_FILE_AT_LINE (104)) ;
    var_cas_other_fields = GGS_ident_map ::constructor_emptyMap (inLexique COMMA_SOURCE_FILE_AT_LINE (105)) ;
    var_cas_isr = GGS_isr_obj ::constructor_new (inLexique, var_cas_desc, var_cas_category, var_cas_priority, var_cas_resources, var_cas_messages, var_cas_acc_apps, var_cas_timing_prot, var_cas_other_fields COMMA_SOURCE_FILE_AT_LINE (106)) ;
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_HERE) ;
  nt_isr_5F_attributes_ (inLexique, var_cas_category, var_cas_priority, var_cas_resources, var_cas_messages, var_cas_acc_apps, var_cas_timing_prot, var_cas_other_fields) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_HERE) ;
  nt_description_ (inLexique, var_cas_desc) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
  var_cas_isr = GGS_isr_obj ::constructor_new (inLexique, var_cas_desc, var_cas_category, var_cas_priority, var_cas_resources, var_cas_messages, var_cas_acc_apps, var_cas_timing_prot, var_cas_other_fields COMMA_SOURCE_FILE_AT_LINE (114)) ;
  var_cas_isrs.modifier_put (inLexique, var_cas_isr_name, var_cas_isr COMMA_SOURCE_FILE_AT_LINE (115)) ;
}

//---------------------------------------------------------------------------*

void goil_obj_isr::rule_goil_5F_obj_5F_isr_isr_i0_parse (C_Lexique_goil_5F_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_ISR) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_HERE) ;
  nt_isr_5F_attributes_parse (inLexique) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_HERE) ;
  nt_description_parse (inLexique) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
  GGS_lstring::constructor_retrieveAndResetTemplateString (inLexique COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//            Implementation of production rule 'isr_attributes'             *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_isr::rule_goil_5F_obj_5F_isr_isr_5F_attributes_i1_ (C_Lexique_goil_5F_lexique & inLexique,
                                GGS_basic_type  &var_cas_category,
                                GGS_basic_type  &var_cas_priority,
                                GGS_lstringlist  &var_cas_resources,
                                GGS_lstringlist  &var_cas_messages,
                                GGS_lstringlist  &var_cas_acc_apps,
                                GGS_timing_prot  &var_cas_timing_prot,
                                GGS_ident_map  &var_cas_other_fields) {
  { bool syntaxRepeat_0 = true ;
    while (syntaxRepeat_0) {
      switch (select_goil_5F_obj_5F_isr_0 (inLexique)) {
        case 2 : {
          GGS_luint64  var_cas_cat ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_CATEGORY) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_integerNumber (var_cas_cat) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_HERE) ;
          GGS_lstring  automatic_var_3389_0 ;
          nt_description_ (inLexique, automatic_var_3389_0) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          { const GGS_basic_type _var_3790 = var_cas_category ; // CAST instruction
            if (_var_3790.getPtr () != NULL) {
              macroValidPointer (_var_3790.getPtr ()) ;
              if (typeid (cPtr_uint64_class) == typeid (* (_var_3790.getPtr ()))) {
                GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("ISR category attribute already defined for this ISR") COMMA_SOURCE_FILE_AT_LINE (134)) ;
                var_cas_category.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (134)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously defined here") COMMA_SOURCE_FILE_AT_LINE (135)) ;
              }else{
                const GGS_bool cond_3717 = ((var_cas_cat.reader_uint64 (inLexique COMMA_SOURCE_FILE_AT_LINE (136))).operator_isNotEqual (GGS_uint64 (1ULL))).operator_and ((var_cas_cat.reader_uint64 (inLexique COMMA_SOURCE_FILE_AT_LINE (136))).operator_isNotEqual (GGS_uint64 (2ULL))) ;
                if (cond_3717.isBuiltAndTrue ()) {
                  GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("ISR category should be 1 ou 2") COMMA_SOURCE_FILE_AT_LINE (138)) ;
                }
                var_cas_category = GGS_uint64_class ::constructor_new (inLexique, GGS_location (inLexique), var_cas_cat.reader_uint64 (inLexique COMMA_SOURCE_FILE_AT_LINE (139)) COMMA_SOURCE_FILE_AT_LINE (139)) ;
              }
            }
          }
          } break ;
        case 3 : {
          GGS_luint64  var_cas_prio ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_PRIORITY) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_integerNumber (var_cas_prio) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_HERE) ;
          GGS_lstring  automatic_var_3889_0 ;
          nt_description_ (inLexique, automatic_var_3889_0) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          { const GGS_basic_type _var_4147 = var_cas_priority ; // CAST instruction
            if (_var_4147.getPtr () != NULL) {
              macroValidPointer (_var_4147.getPtr ()) ;
              if (typeid (cPtr_void) == typeid (* (_var_4147.getPtr ()))) {
                var_cas_priority = GGS_uint32_class ::constructor_new (inLexique, GGS_location (inLexique), var_cas_prio.reader_uint64 (inLexique COMMA_SOURCE_FILE_AT_LINE (146)).reader_uint (inLexique COMMA_SOURCE_FILE_AT_LINE (146)) COMMA_SOURCE_FILE_AT_LINE (146)) ;
              }else{
                GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("PRIORITY already defined for this ISR") COMMA_SOURCE_FILE_AT_LINE (149)) ;
                var_cas_priority.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (149)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previouly defined here") COMMA_SOURCE_FILE_AT_LINE (150)) ;
              }
            }
          }
          } break ;
        case 4 : {
          GGS_lstring  var_cas_rez ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_RESOURCE) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_att_5F_token (var_cas_rez) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
          GGS_lstring  automatic_var_4236_0 ;
          nt_description_ (inLexique, automatic_var_4236_0) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          ::routine_add_lstring_unique (inLexique,  var_cas_resources,  var_cas_rez,  GGS_string ("RESOURCE") COMMA_SOURCE_FILE_AT_LINE (154)) ;
          } break ;
        case 5 : {
          GGS_lstring  var_cas_mess ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_MESSAGE) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_att_5F_token (var_cas_mess) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
          GGS_lstring  automatic_var_4379_0 ;
          nt_description_ (inLexique, automatic_var_4379_0) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          ::routine_add_lstring_unique (inLexique,  var_cas_messages,  var_cas_mess,  GGS_string ("MESSAGE") COMMA_SOURCE_FILE_AT_LINE (158)) ;
          } break ;
        case 6 : {
          const GGS_bool cond_4617 = (gOption_goil_5F_options_autosar_5F_on.reader_value ()).operator_isEqual (GGS_bool (false)) ;
          if (cond_4617.isBuiltAndTrue ()) {
            GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("AUTOSAR flag is off, turn it on to use TIMINGPROTECTION attribute in ISR object") COMMA_SOURCE_FILE_AT_LINE (162)) ;
          }
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TIMING_5F_PROTECTION) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
          switch (select_goil_5F_obj_5F_isr_1 (inLexique)) {
            case 1 : {
              inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) COMMA_HERE) ;
              var_cas_timing_prot = GGS_false_timing_prot ::constructor_new (inLexique, GGS_location (inLexique) COMMA_SOURCE_FILE_AT_LINE (166)) ;
              } break ;
            case 2 : {
              inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) COMMA_HERE) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_HERE) ;
              GGS_basic_type  var_cas_exe_budget ;
              GGS_basic_type  var_cas_exe_time ;
              GGS_basic_type  var_cas_time_frame ;
              GGS_basic_type  var_cas_os_it_lock ;
              GGS_basic_type  var_cas_all_it_lock ;
              GGS_rezlock_map  var_cas_rezlocks ;
              nt_timing_5F_prot_5F_attrs_ (inLexique, var_cas_exe_budget, var_cas_exe_time, var_cas_time_frame, var_cas_os_it_lock, var_cas_all_it_lock, var_cas_rezlocks) ;
              { const GGS_basic_type _var_5153 = var_cas_exe_time ; // CAST instruction
                if (_var_5153.getPtr () != NULL) {
                  macroValidPointer (_var_5153.getPtr ()) ;
                  if (typeid (cPtr_void) == typeid (* (_var_5153.getPtr ()))) {
                    GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("EXECUTIONTIME not declared") COMMA_SOURCE_FILE_AT_LINE (178)) ;
                  }else{
                  }
                }
              }
              { const GGS_basic_type _var_5327 = var_cas_exe_budget ; // CAST instruction
                if (_var_5327.getPtr () != NULL) {
                  macroValidPointer (_var_5327.getPtr ()) ;
                  if (typeid (cPtr_uint64_class) == typeid (* (_var_5327.getPtr ()))) {
                    const GGS_uint64_class var_cas_eb (_var_5327.getPtr ()) ;
                    var_cas_eb.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (181)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("EXECUTIONBUDGET is not an attribute of isr timing protection") COMMA_SOURCE_FILE_AT_LINE (182)) ;
                  }else{
                  }
                }
              }
              var_cas_timing_prot = GGS_timing_prot_isr ::constructor_new (inLexique, GGS_location (inLexique), var_cas_exe_time, var_cas_time_frame, var_cas_os_it_lock, var_cas_all_it_lock, var_cas_rezlocks COMMA_SOURCE_FILE_AT_LINE (184)) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_HERE) ;
              } break ;
            default :
              break ;
          }
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          } break ;
        case 7 : {
          GGS_lstring  var_cas_app ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_ACCESSING_5F_APPLICATION) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_att_5F_token (var_cas_app) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
          GGS_lstring  automatic_var_5626_0 ;
          nt_description_ (inLexique, automatic_var_5626_0) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          ::routine_add_lstring_unique (inLexique,  var_cas_acc_apps,  var_cas_app,  GGS_string ("ACCESSING_APPLICATION") COMMA_SOURCE_FILE_AT_LINE (197)) ;
          } break ;
        case 8 : {
          GGS_lstring  var_cas_src ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_SOURCE) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_att_5F_token (var_cas_src) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
          var_cas_other_fields.modifier_put (inLexique, GGS_lstring ::constructor_new (inLexique, GGS_string ("SOURCE"), GGS_location (inLexique) COMMA_SOURCE_FILE_AT_LINE (201)), GGS_string_class ::constructor_new (inLexique, var_cas_src.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (201)), var_cas_src.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (201)) COMMA_SOURCE_FILE_AT_LINE (201)) COMMA_SOURCE_FILE_AT_LINE (201)) ;
          GGS_lstring  automatic_var_5879_0 ;
          nt_description_ (inLexique, automatic_var_5879_0) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          } break ;
        case 9 : {
          nt_free_5F_field_ (inLexique, var_cas_other_fields) ;
          GGS_lstring  automatic_var_5945_0 ;
          nt_description_ (inLexique, automatic_var_5945_0) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          } break ;
        default :
          syntaxRepeat_0 = false ;
          break ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

void goil_obj_isr::rule_goil_5F_obj_5F_isr_isr_5F_attributes_i1_parse (C_Lexique_goil_5F_lexique & inLexique) {
  { bool syntaxRepeat_0 = true ;
    while (syntaxRepeat_0) {
      switch (select_goil_5F_obj_5F_isr_0 (inLexique)) {
        case 2 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_CATEGORY) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_HERE) ;
          nt_description_parse (inLexique) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          } break ;
        case 3 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_PRIORITY) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_HERE) ;
          nt_description_parse (inLexique) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          } break ;
        case 4 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_RESOURCE) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
          nt_description_parse (inLexique) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          } break ;
        case 5 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_MESSAGE) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
          nt_description_parse (inLexique) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          } break ;
        case 6 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TIMING_5F_PROTECTION) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
          switch (select_goil_5F_obj_5F_isr_1 (inLexique)) {
            case 1 : {
              inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) COMMA_HERE) ;
              } break ;
            case 2 : {
              inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) COMMA_HERE) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_HERE) ;
              nt_timing_5F_prot_5F_attrs_parse (inLexique) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_HERE) ;
              } break ;
            default :
              break ;
          }
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          } break ;
        case 7 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_ACCESSING_5F_APPLICATION) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
          nt_description_parse (inLexique) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          } break ;
        case 8 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_SOURCE) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
          nt_description_parse (inLexique) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          } break ;
        case 9 : {
          nt_free_5F_field_parse (inLexique) ;
          nt_description_parse (inLexique) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
          } break ;
        default :
          syntaxRepeat_0 = false ;
          break ;
      }
    }
  }
  GGS_lstring::constructor_retrieveAndResetTemplateString (inLexique COMMA_HERE) ;
}

//---------------------------------------------------------------------------*

