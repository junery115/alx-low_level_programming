#ifndef _PRINTF_HEADERS_
#define _PRINTF_HEADERS_

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_op(const char *format, fmt_t *print_arr, va_list list);


#endif
