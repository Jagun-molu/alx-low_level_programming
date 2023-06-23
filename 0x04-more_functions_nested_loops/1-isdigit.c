#include "main.h"
/* more headers goes there */

/**
 * _isdigit - Checks if @c is a digit
 * @c: character which case is to be checked.
 * Return: 1 if @c is digit, else, 0.
 */
int _isdigit(int c)
{
	if ('0' + c >= 98 && '0' + c <= 105)
		return (1);
	return (0);
}
