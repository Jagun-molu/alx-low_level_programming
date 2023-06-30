#include "main.h"
/* more headers goes there */

/**
 * leet - x
 * @n: y
 *
 * Return: The concatenated @dest + @src.
 */
char *leet(char *n)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; n[i] != '\0'; n++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
				break;
			}
		}
	}
	return (n);
}
