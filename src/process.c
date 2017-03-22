#include "loader.h"

/* Usable functions */

int (*process[PROCESS_NUMBER])(const char * query, unsigned int n, va_list ap, int * opt) = {
   escapeProcess,
   integerProcess,
   charProcess,
   stringProcess,
   pointerProcess,
   hexadecimalProcess,
   octalProcess
};

/* local functions */

int escapeProcess(const char * query, unsigned int n, va_list ap, int * opt){
  (void) ap;
  (void) opt;
  if (query[n] == '%'){
    charPrintHelper('%');
    return 1;
  }
  return 0;
}

int integerProcess(const char * query, unsigned int n, va_list ap, int * opt){
  if (query[n] == 'd' || query[n] == 'i'){
    if (opt[lenghtMod] == longIntLenght){
      integerPrintHelper(va_arg(ap, int)); // TO DO
    } else if (opt[lenghtMod] == shortIntLenght){
      integerPrintHelper(va_arg(ap, int)); // TO DO
    } else {
      integerPrintHelper(va_arg(ap, int));
    }
    return 1;
  }
  return 0;
}

int charProcess(const char * query, unsigned int n, va_list ap, int * opt){
  (void) opt;
  if (query[n] == 'c'){
    charPrintHelper((char) va_arg(ap, int));
    return 1;
  }
  return 0;
}

int stringProcess(const char * query, unsigned int n, va_list ap, int * opt){
  (void) opt;
  if (query[n] == 's'){
    stringPrintHelper(va_arg(ap, char *));
    return 1;
  }
  return 0;
}

int pointerProcess(const char * query, unsigned int n, va_list ap, int * opt){
  (void) opt;
  if (query[n] == 'p'){
    addressPrintHelper(va_arg(ap, long long));
    return 1;
  }
  return 0;
}

int hexadecimalProcess(const char * query, unsigned int n, va_list ap, int * opt){
  (void) opt;
  if (query[n] == 'x'){
    hexadecimalPrintHelper(va_arg(ap, int));
    return 1; 
  } else if (query[n] == 'X') {
    hexadecimalCapitalPrintHelper(va_arg(ap, int));
    return 1; 
  }
  return 0;
}

int octalProcess(const char * query, unsigned int n, va_list ap, int * opt){
  (void) opt;
  if (query[n] == 'o'){
    octalPrintHelper(va_arg(ap, int));
    return 1; 
  }
  return 0;
}
