#include "main.h"

/**
 * reverse_array - returns a reversed array.
 *
 * @a: main array
 * @n: number
 *
 * Return: The reversed array.
 */

void reverse_array(int *a, int n)
{
	int *i = a;
	int *j = a + n - 1;
	int temp;

	while (i < j)
	{
		temp = *i;
		*i = *j;
		*j = temp;
		i++;
		j--;
	}

}
