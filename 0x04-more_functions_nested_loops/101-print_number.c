#include "main.h"

/**
 * print_integer - Prints the given integer to the standard output.
 *
 * @a: The integer to be printed.
 */
void print_integer(int a)
{
	if (a / 10)
	{
		print_integer(a / 10);
	}
	_putchar(a % 10 + '0');
}

/**
 * print_number: prints @n to the output without using standard libraries.
 * @n: the number to be printed out.
 * Description: Later
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	print_integer(n);
}
