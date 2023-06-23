#include <ctype.h>
#include "main.h"
/* more headers goes there */

/**
 * _isdigit - Checks if @c is a digit
 * @c: character which case is to be checked.
 * Return: 1 if @c is digit, else, 0.
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
