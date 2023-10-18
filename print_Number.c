#include "main.h"
#include <stdlib.h>

/**
 * print_number - print Numbers passed from listedPrint.
 *
 * Description: a function that prints decimal & integer numbers.
 * @listedPrint: list of numbers which will be printed.
 *
 * Return: number of printed digits, -1 if nothing printed.
 */

int print_number(va_list listedPrint)
{
	int numDigits = 0;
	int rev_num = 0;
	int numbers = va_arg(listedPrint, int);
	int x = numbers;

	if (numbers < 0)
	{
		_putchar('-');
		numbers = -1 * numbers;
		x = -x;
		numDigits++;
	}
	while (x > 0)
	{
		numDigits++;
		x = x / 10;
	}
	while (numbers)
	{
		rev_num = rev_num * 10 + (numbers % 10);
		numbers = numbers / 10;
	}
	while (rev_num > 0)
	{
		_putchar(rev_num % 10 + '0');
		rev_num = rev_num / 10;
	}
	return (numDigits);
}
