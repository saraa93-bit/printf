#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

/**
* struct myFormatCheck - struct format
* @spsifier: input formate
* @printIt: a pointer to function
*
* Description: format struct
*/

typedef struct myFormatCheck
{
	char *spsifier;
	int (*printIt)(va_list);
} myFormat;

int _printf(const char *format, ...);
int print_char(va_list listedPrint);
int print_string(va_list listedPrint);
int printInteger(va_list listedPrint);
int _putchar(char c);
int percent_print(va_list listedPrint);
int print_rev_str(va_list listedPrint);

#endif
