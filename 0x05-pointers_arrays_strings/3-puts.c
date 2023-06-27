#include "main.h"
/* more headers goes there */

/**
 * _puts - Prints the content of string str to the stdout.
 * @str: The string that is to be printed to the console.
 *
 * Return:Nothing.
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
