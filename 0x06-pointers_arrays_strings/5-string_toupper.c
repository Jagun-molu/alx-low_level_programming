#include "main.h"

/**
 * string_toupper - Converts lowercase to UPPERCASE.
 *
 * @c: The string to be converted.
 *
 * Return: The character.
 */

char *string_toupper(char *c)
{
	char *result = c;
	int temp;

	while (*c != '\0')
	{
		temp = *c;
		if (temp >= 97 && temp <= 122)
			*c = (char)(temp - 32);
		c++;
	}

	return (result);
}
