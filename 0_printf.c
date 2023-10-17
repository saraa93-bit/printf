#include "main.h"

/**
* _printf - Function that produces output according to a format
* @format:  A pointer parameter to input format
*
* Return: Number of printed characters.
*/

int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	va_list listedPrint;
	myFormat myFormatChecks[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", printInteger},
		{"i", printInteger}
	};
	if (format == NULL || format[0] == '\0')
	{
		return (-1);
	}
	va_start(listedPrint, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == '%' && format[i + 1] != '\0')
			{
				if (format[i + 1] == myFormatChecks[j].spsifier[0])
				{
					myFormatChecks[j].printIt(listedPrint);
				}
				else if (format[i + 1] == '%')
					_putchar('%');
			}
			else
				return (-1);
			j++;
		}
		_putchar(format[i]);
		i++;
	}
	va_end(listedPrint);
	return (i);
}
