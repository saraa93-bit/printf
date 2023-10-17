#include "main.h"

/**
 * printInteger - print Numbers passed from listedPrint.
 *
 * Description: a function that prints decimal & integer numbers.
 * @listedPrint: list of numbers which will be printed.
 *
 * Return: number of printed digits, -1 if nothing printed.
 **/
int printInteger(va_list listedPrint)
{
	int endDigit, NumOfDigits = 1, printNumber, remainNumber = 0, count = 0;
	int c = va_arg(listedPrint, int);

	if (!c)
	{
		return (-1);
	}
	endDigit = c % 10;
	if (c < 0)
	{
		_putchar('-');
		count++;
	}
	if (endDigit < 0)
	{
		c = -1 * c;
		endDigit = -1 * endDigit;
	}
	c = c / 10;
	remainNumber = c;
	if (remainNumber > 0)
	{
		while (remainNumber / 10 != 0)
		{
			NumOfDigits = NumOfDigits * 10;
			remainNumber = remainNumber / 10;
		}
		remainNumber = c;
		while (NumOfDigits > 0)
		{
			printNumber = remainNumber / NumOfDigits;
			remainNumber = remainNumber - (printNumber * NumOfDigits);
			NumOfDigits = NumOfDigits / 10;
			_putchar(printNumber + '0');
			count++;
		}
	}
	_putchar(endDigit + '0');
	return (count + 1);
}
