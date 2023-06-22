#include "main.h"
#include <stdio.h>

/**
 * natural - Prints multiples of 3 and 5 from 0 to @n
 *
 *
 */
void natural(void)
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
