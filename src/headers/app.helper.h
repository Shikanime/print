#ifndef MY_PRINTF_APP_HELPER_H
#define MY_PRINTF_APP_HELPER_H

void        charPrintHelper                 (char c);
long int    stringLengthHelper              (const char * s);
void        stringPrintHelper               (const char * s);
void        integerPrintHelper              (int n);
void        unsignedintegerPrintHelper      (unsigned int n);
void	    addressPrintHelper              (long long n);
void        HexadecimalPrintHelper          (long long n);
void        HexadecimalCapitalPrintHelper   (long long n);
void	    signedOctalPrintHelper          (int n);

#endif //MY_PRINTF_APP_HELPER
