#include "main.h"
/**
 * print_sign - A brief description of the function.
 *
 * @alphabet: the integer to be checked
 *
 * Return: 1 if @alphabet is lowercase else 0
 */
int print_sign(int alphabet)
{

	if (alphabet > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (alphabet < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);

}
