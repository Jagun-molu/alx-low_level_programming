#include <stdio.h>

/**
 * main - Prints first 50 fibonacci numbers
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	unsigned long int j, k, l, m;

	i = 3;
	j = 1;
	k = 2;
	l = 0;
	m = 0;
	while (l + k < 4000000)
	{
		if (i == 3)
		{
			l = j + k;
			i++;
		}
		else
		{
			j = k;
			k = l;
			l += j;
		}
		if (l % 2 == 0)
			m += l;
	}
	putchar('\n');
	return (0);
}
