#include "main.h"
/* more headers goes there */

/**
 * _strcat - Adds the content of @src to @dest.
 * @src: Where to copy text from.
 * @dest: Where to copy text to.
 *
 * Return: The concatenated @dest + @src.
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (result);
}
