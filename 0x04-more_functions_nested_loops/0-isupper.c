#include "main.h"
/* more headers goes there */

/**
 * _isupper - Checks the sase of an alphabet.
 * @c: character which case is to be checked.
 * Return: 1 if @c is uppercase, else, 0.
 */
int _isupper(int c)
{
	if ('0' + c >= 113 && '0' + c <= 138)
		return (1);
	return (0);
}
