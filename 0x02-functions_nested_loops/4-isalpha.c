#include "main.h"
/**
 * _isalpha - A brief description of the function.
 *
 * @alphabet: the integer to be checked
 *
 * Return: 1 if @alphabet is lowercase else 0
 */
int _isalpha(int alphabet)
{

	if (alphabet + '0' >= 113 && alphabet + '0' <= 170)
	{
		if (!(alphabet + '0' >= 139 && alphabet + '0' <= 144))
		{
			return (1);
		}
	}
	return (0);

}
