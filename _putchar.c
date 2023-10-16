#include <unistd.h>
/**
* _putchar - print a charecter c to the output
* @c: is a character
* Return: if success return 1 and -1 otherwise
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
