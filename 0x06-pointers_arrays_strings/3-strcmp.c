#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 * @s1: The main string.
 * @s2: The string to be compared with the main string.
 * Return: The difference between the length of s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}

	i = *s1;
	j = *s2;

	if (!(i))
		return (-1 * j);
	else if (!(j))
		return (i);

	if (i == j)
		return (0);

	return (i - j);
}
