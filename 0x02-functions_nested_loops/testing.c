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
 * print_to_98 - Prints from @a to 98.
 *
 * @n: The number to begin printing from.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_integer(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			print_integer(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
