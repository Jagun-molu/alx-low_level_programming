#include "main.h"
#include <stdio.h>

/**
 * print_multiples_of_3_and_5 - Prints multiples of 3 and 5 from 0 to @n
 *
 * @n: The number to begin printing from.
 */
void print_multiples_of_3_and_5(int n)
{
	int i, j;


	j = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j += i;
	}
	printf("%d\n", j);
}
