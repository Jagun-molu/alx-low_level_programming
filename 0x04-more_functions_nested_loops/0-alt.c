#include <ctype.h>
#include "main.h"
/* more headers goes there */

/**
 * _isupper - Checks the sase of an alphabet.
 * @c: character which case is to be checked.
 * Return: 1 if @c is uppercase, else, 0.
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
