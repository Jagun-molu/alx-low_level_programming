#include "main.h"
/**
 * print_integer - A brief description of the function.
 *
 * @a: The number to be considered
 */
void print_integer(int a)
{
	if (a / 10)
	{
		print_integer(a / 10);
	}
	_putchar(num % 10 + '0');
}
