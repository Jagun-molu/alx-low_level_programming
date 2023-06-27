#include "main.h"
/* more headers goes there */

/**
 * swap_int - resets the value of a variable to 98
 * @a: The first pointer to be swapped.
 * @b: The second pointer to be swapped.
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
