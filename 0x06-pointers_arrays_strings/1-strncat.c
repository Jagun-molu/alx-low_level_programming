#include "main.h"
/* more headers goes there */

/**
 * _strcat - Adds the content of @src to @dest.
 * @src: Where to copy text from.
 * @dest: Where to copy text to.
 *
 * Return: The concatenated @dest + @src.
 */
char *_strncat(char *dest, char *src, int n)
{

	while (*dest)
	{
		dest++;
	}
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (dest);
}
