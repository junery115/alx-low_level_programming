#ifndef _PRINTF_HEADERS_
#define _PRINTF_HEADERS_

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_op(const char *format, fmt_t *print_arr, va_list list);
int ch(va_list character);
int str(va_list string);
int _int(va_list integ);
int _ui(va_list unsign);
int _oct(va_list octo);
int _rot13(va_list rot);
int _hex_str(unsigned int n, unsigned int hex, char alpha);
int _hex_l(va_list hexa);
int _hex_u(va_list hexa);
int _strlen(char *s);
int _bin(va_list bin);


#endif
