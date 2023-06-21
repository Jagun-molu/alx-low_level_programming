#include "main.h"
/**
 * _abs - A brief description of the function.
 *
 * @alphabet: the integer to be checked
 *
 * Return: 1 if @alphabet is lowercase else 0
 */
int _abs(int alphabet)
{

	if (alphabet < 0)
	{
		return (alphabet * -1);
	}
	return (alphabet);

}
