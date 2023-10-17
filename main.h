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
}myFormat;

int _printf(const char *format, ...); /* Handle various format specifiers */
int print_char(va_list listedPrint); /* Handle format of character */
int print_string(va_list listedPrint); /* Handle format of string */
int printInteger(va_list listedPrint); /* Handle format of integer */
int _putchar(char c); /* print a charectar to output*/
int print_rev_str(va_list listedPrint); /* Handle format of reverse string */

#endif 
