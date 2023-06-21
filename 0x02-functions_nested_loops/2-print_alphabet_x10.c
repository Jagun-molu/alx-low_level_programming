#include "main.h"
/**
 * print_alphabet_x10 - A brief description of the function.
 *
 * Description: Provide a more detailed description of the function,
 * explaining its purpose, parameters, and any other relevant details.
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; ++i)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
