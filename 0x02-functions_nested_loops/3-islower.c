#include "main.h"
/**
 * _islower - A brief description of the function.
 *
 * @alphabet: the integer to be checked
 *
 * Return: 1 if @alphabet is lowercase else 0
 */
int _islower(int alphabet)
{

	if (97 <= alphabet + '0' && alphabet + '0' <= 122)
	{
		return (0);
	}
	return (1);

}
