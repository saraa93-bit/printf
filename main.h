#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#define NULL_STRING "(null)"
#define NUL '\0'

int _putchar(char c);
int _printf(const char *format, ...);
int printInteger(va_list listedPrint);
int print_string(va_list listedPrint);
int print_char(va_list listedPrint);
int percent_print(va_list listedPrint);
#endif
