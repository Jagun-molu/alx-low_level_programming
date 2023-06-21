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

	if (alphabet + '0' < 97 || alphabet + '0' > 122)
	{
		return (1);
	}
	return (0);

}
