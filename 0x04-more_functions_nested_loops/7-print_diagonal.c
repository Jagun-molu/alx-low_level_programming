#include "main.h"
/* more headers goes there */

/**
 * print_diagonal - prints \ @n number of times.
 * @n: The number of times \ is to be printed.
 *
 * Return: nothing
 */
void print_diagonal(int n)
{

	int i, m;

	m = n;
	if (n <= 0)
		_putchar('\n');
	while (n > 0)
	{
		for (i = n; i < m; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		n--;
	}

}
