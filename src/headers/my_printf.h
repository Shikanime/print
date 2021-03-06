/*
   my_printf.h for my_printf in /home/asuramaru/Project/print/phetsi_w/src

   Made by PHETSINORATH William
   Login   <phetsi_w@etna-alternance.net>

   Started on  Fri Mar 24 14:38:44 2017 PHETSINORATH William
   Last update Fri Mar 24 14:38:50 2017 PHETSINORATH William
*/

#ifndef MY_PRINTF_MAIN_H
#define MY_PRINTF_MAIN_H

/* Helpers */

#define OPTION_NUMBER 1
#define PROCESS_NUMBER 10

#include <stdarg.h>

/* Usual functions */

void my_printf(const char * query, ...);

/* Internal functions */

void machina        (const char * query, va_list * ap);
void optionsMachina (const char * query, int * positionQry, int * optionsQry);
void processMachina (const char * query, int * positionQry, int * optionsQry, va_list * ap);

/* External functions */

// Helper
void        charPrintHelper     (char c);
long int    stringLengthHelper  (const char * s);
// Rules option
int         (*option[OPTION_NUMBER])    (const char * query, int n, int * opt);
// Rules process
int         (*process[PROCESS_NUMBER])  (const char * query, int n, int * opt, va_list * ap);

#endif //MY_PRINTF_MAIN_H
