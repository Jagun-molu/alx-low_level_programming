#include "main.h"
/* more headers goes there */

/**
 * print_line - prints _ @n number of times.
 * @n: The number of times _ is to be printed.
 *
 * Return: nothing
 */
void print_line(int n)
{

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
