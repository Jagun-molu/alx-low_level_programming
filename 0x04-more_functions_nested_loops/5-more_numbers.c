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
 * more_numbers - prints numbers from 0 to 14, 10 times.
 *
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
			print_integer(i);
		_putchar('\n');
	}
}
