#include "main.h"

/**
* percent_print: a function that prints apercent.
*
* Description: a function that prints listed input.
* @listedPrint: list of character need to print
*
* Return: number of printed digits, -1 if nothing printed.
**/
int percent_print(va_list listedPrint)
{
}

/**
* _printf - Function that produces output according to a format
* @format:  A pointer parameter to input format
*
* Return: Number of printed characters.
*/

int _printf(const char *format, ...)
{
	int x, count;
	va_list listedPrint;

	va_start(listedPrint, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (count = 0; format[count] != '\0'; count++)
	{
		if (format[count] == '%' && format[count + 1] == 'c')
		{
			count++;
			x += printChar(listedPrint);
		}
		if (format[count] == '%' && format[count + 1] == 's')
		{
			count++;
			x += printString(listedPrint);
		}
		if (format[count] == '%' && (format[count + 1] == 'd'
					|| format[count + 1] == 'i'))
		{
			count++;
			x += printInteger(listedPrint);
		}
		if (format[count] == '%' && format[count + 1] == '%')
		{
			count = count + 2;
			_putchar('%');
			x++;
		}
		_putchar(format[count]);
		x++;
	}
	va_end(listedPrint);
	return (x - 1);
}
