#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_array - Prints the first @n items of @a
 * @a: The array to be checked.
 * @n: The number of items to print from the array.
 *
 * Return:Nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
