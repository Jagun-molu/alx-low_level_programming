#include "main.h"
/* more headers goes there */

/**
 * leet - x
 * @n: y
 *
 * Return: replaced result
 */
char *leet(char *n)
{
	int i, j;
	char a[10] = "aAeEoOtTlL";
	char b[10] = "4433007711";

	for (i = 0; n[i] != '\0'; n++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
			}
			_putchar(n[i]);
		}
	}
	return (n);
}
