#include "main.h"
/* more headers goes there */

/**
 * _strncpy - Adds the content of @src to @dest.
 * @src: Where to copy text from.
 * @dest: Where to copy text to.
 * @n: Maximum number of bytes.
 *
 * Return: The concatenated @dest + @src.
 */
char *_strncpy(char *dest, char *src, int n)
{

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		n--;
	}

	return (dest);
}
