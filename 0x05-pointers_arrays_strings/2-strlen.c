#include "main.h"
/* more headers goes there */

/**
 * _strlen - returns the length of string @s.
 * @s: The string whose length is to be checked.
 *
 * Return: The length of the string @s
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
