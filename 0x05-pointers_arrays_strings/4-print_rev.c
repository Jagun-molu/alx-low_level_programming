#include "main.h"
/* more headers goes there */

/**
 * print_rev - Prints the content of string @str in reverse order.
 * @s: The string that is to be printed to the console.
 *
 * Return:Nothing.
 */
void print_rev(char *s)
{
	int n = 0;
	int i;

	while (s[n] != '\0')
	{
		n++;
	}

	for (i = n - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
