#include "main.h"

/**
* print_string - a function that Prints a string
*
* @args: list of arguments will be printed
* Return: number of printed argument, -1 if nothing printed
*/

int print_string(va_list args)
{
	int a;
	char *c;

	c = va_arg(args, char *);
	if (c == NULL)
		return (-1);
	a = 0;
	while (c[a] != '\0')
		a++;
	return (a);
}
/**
* percent_print - a function that Prints a percent %.
*
* Description: Prints a percent %.
* @args: list of argument will be printed
* Return: the percent % in success, 1 in failure.
*/

int percent_print(va_list args)
{
	int i;
	char *st;

	if (st[i] == '%')
		putchar('%');
	else
		return (1);
}

/**
* print_char - a function that Prints a charectar
*
* Description: Prints a  charectar.
* @args: the arguments list
* Return: number of characters printed.
*/

int print_char(va_list args)
{
	char *ap;

	ap = va_arg(args, char *);
	return (1);
}
