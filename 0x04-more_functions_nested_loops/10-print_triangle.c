#include "main.h"
/* more headers goes there */

/**
 * print_triangle - prints a triangle of size @size.
 * @size: The size of the triangle to be printed.
 * Return: nothing
 */
void print_triangle(int size)
{

	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			_putchar('#');
		_putchar('\n');
	}
	if (i <= 0)
		_putchar('\n');
}
