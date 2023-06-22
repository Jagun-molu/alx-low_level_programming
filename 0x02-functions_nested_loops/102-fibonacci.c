#include <stdio.h>

/**
 * main - Prints first 50 fibonacci numbers
 *
 * Return: 0 Always
 */
int main(void)
{
	int i, j, k, l;

	i = 3;
	j = 1;
	k = 2;
	printf("%d, %d, ", 1, 2);
	while (i <= 50)
	{
		if (i == 3)
			l = j + k;
		else
		{
			j = k;
			k = l;
			l += j;
		}
		printf("%d", l);
		if (i != 50)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return 0;
}
