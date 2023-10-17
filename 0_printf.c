#include "main.h"
/**
* _printf - Function that produces output according to a format
* @format: A pointer parameter to input format
*
* Return: Number of printed characters.
*/
int _printf(const char *format, ...)
{
	myFormat myFormatChecks[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", printInteger},
		{"i", printInteger}
	};
	int i = 0, j = 0, count = 0;
	va_list listedPrint;

	va_start(listedPrint, format);
	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == '%' && format[i + 1] != '\0')
			{
				if (format[i + 1] == myFormatChecks[j].spsifier[0])
				{
					i = i + 2;
					count = count + myFormatChecks[j].printIt(listedPrint);
				}
				else if (format[i] == '%' && format[i + 1] == '%')
				{
					i++;
					count++;
					_putchar('%');
				}
			}
			j++;
		}
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(listedPrint);
	return (count);
}
