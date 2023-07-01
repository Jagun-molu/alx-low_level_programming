#include "main.h"

/**
 * cap_string - Capitalizes the First Letter of Every Word in @c.
 *
 * @c: The string to be converted.
 *
 * Return: The character.
 */

char *cap_string(char *c)
{
	char *result = c;
	char check[] = " ;.!?\"(){}";
	int temp, j;
	int cond = 0;

	while (*c != '\0')
	{
		if (cond == 1)
		{
			temp = *c;
			if (temp >= 97 && temp <= 122)
				*c = (char)(temp - 32);
			cond = 0;
		}
		for (j = 0; j < 11; j++)
		{
			if (*c == check[j])
			{
				cond = 1;
				break;
			}
		}
		c++;
	}

	return (result);
}
