#include "main.h"

/**
* print_string - a function that Prints a string
* @listedPrint: list of arguments will be printed
*
* Return: number of printed argument, -1 if nothing printed
*/

int print_string(va_list listedPrint)
{
	int a;
	char *c;

	c = va_arg(listedPrint, char *);
	if (c == NULL)
		return (-1);
	a = 0;
	while (c[a] != '\0')
	{
		_putchar(c[a]);
		a++;
	}
	return (a);
}

/**
* print_char - a function that Prints a charectar
*
* Description: Prints a  charectar.
* @listedPrint: the arguments list
* Return: number of characters printed.
*/

int print_char(va_list listedPrint)
{
	char ap;

	ap = va_arg(listedPrint, int);
	_putchar(ap);
	return (1);
}
