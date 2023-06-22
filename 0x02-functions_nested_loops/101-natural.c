#include <stdio.h>

/**
 * main - Prints multiples of 3 and 5 from 0 to @n
 *
 * Return: 0 Always
 */
int main(void)
{
	int i, j;


	j = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j += i;
	}
	printf("%d\n", j);

	return (0);
}
