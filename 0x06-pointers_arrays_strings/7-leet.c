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

	char *result = n;
	char a[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char b[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; n++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
			}
		}
	}
	return (result);
}
