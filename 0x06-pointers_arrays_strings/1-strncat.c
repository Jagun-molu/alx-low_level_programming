#include "main.h"
/* more headers goes there */

/**
 * _strncat - Adds the content of @src to @dest.
 * @src: Where to copy text from.
 * @dest: Where to copy text to.
 * @n: maximum number of bytes to be used.
 *
 * Return: The concatenated @dest + @src.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

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
	while (*dest != '\0')
	{
		putchar(*dest);
	}

	return (result);
}
