#include "main.h"
/**
 * print_last_digit - A brief description of the function.
 *
 * @alphabet: the integer to be checked
 *
 * Return: 1 if @alphabet is lowercase else 0
 */
int print_last_digit(int alphabet)
{
	alphabet = alphabet % 10;

	if (alphabet < 0)
	{
		alphabet = alphabet * -1;
	}
	_putchar('0' + alphabet);
	return (alphabet);

}
