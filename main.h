#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char);
int print_character(va_list args);
int print_string(va_list args);
int print_percent(void);
int print_integer(va_list args);
#endif/* MAIN_H */
