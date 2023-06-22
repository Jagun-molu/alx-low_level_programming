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
 * print_times_table - Prints the multiplication table of the given number.
 *
 * @n: The number to determine the number of tables to go through
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; ++i)
		{
			for (j = 0; j <= n; ++j)
			{
				k = i * j;
				if (k < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (k < 100 && j != 0)
					_putchar(' ');
				print_integer(k);
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}

}
