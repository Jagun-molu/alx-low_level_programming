#include "main.h"
/* more headers goes there */

/**
 * puts_half - Prints every other content of string @str.
 * @str: The string to be workedd on.
 *
 * Return:Nothing.
 */
void puts_half(char *str)
{
	int i = 0, j, k;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i / 2) + 1;
	for (k = j; k < i; k++)
		_putchar(str[k]);
	_putchar('\n');
}
