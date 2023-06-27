#include "main.h"
/* more headers goes there */

/**
 * rev_string - Reverses string @s in reverse equivalent.
 * @s: The string that is to be reversed.
 *
 * Return:Nothing.
 */
void rev_string(char *s)
{
	int n = 0;
	int i;
	char pseudo_s;

	while (s[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n / 2; i++)
	{
		pseudo_s = s[i];
		s[i] = s[n - i - 1];
		s[n - 1 - i] = pseudo_s;
	}
}
