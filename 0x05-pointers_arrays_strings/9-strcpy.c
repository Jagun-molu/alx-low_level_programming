#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _strcpy - Copies the items from @src to @dest
 * @dest: Where elements are to be copied to.
 * @src: Where elements are to be copied from.
 *
 * Return:Nothing.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
