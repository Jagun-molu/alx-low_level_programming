#include "main.h"
/* more headers goes there */

/**
 * puts2 - Prints every other content of string @str.
 * @str: The string that is to be printed to the console.
 *
 * Return:Nothing.
 */
void puts2(char *str)
{
	int n = -1;

	while (*str != '\0')
	{
		n++;
		if (n % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
