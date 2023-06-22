#include <stdio.h>

/**
 * main - Prints first 50 fibonacci numbers
 *
 * Return: 0 Always
 */
int main(void)
{
	unsigned long int j, k, l;

	j = 1;
	k = 2;
	l = 0;
	printf("%d, %d", 1, 2);
	while (l + k < 4000000)
	{
		putchar(',');
		putchar(' ');
		if (i == 3)
			l = j + k;
		else
		{
			j = k;
			k = l;
			l += j;
		}
		printf("%lu", l);
	}
	putchar('\n');
	return (0);
}
