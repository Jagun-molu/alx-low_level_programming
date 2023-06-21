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
 * times_table - Prints the multiplication table of the given number.
 *
 *
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			k = i * j;
			print_integer(k);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (k < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
