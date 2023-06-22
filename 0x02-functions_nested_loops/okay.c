#include <stdio.h>

/**
 * main - Prints first 50 fibonacci numbers
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	unsigned long int j, k, l, m, l1, l2;

	i = 3;
	j = 1;
	k = 2;
	m = 1000000000;
	printf("%d, %d, ", 1, 2);
	while (i <= 92)
	{
		if (i == 3)
			l = j + k;
		else
		{
			j = k;
			k = l;
			l += j;
		}
		printf("%lu", ((l / m) * m) + (l % m));
		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	for (i = 93; i <= 98; i++)
	{
		j = k;
		k = l;
		l1 = j % m;
		l2 = j / m;
		l3 = k % m;
		l4 = k / m;
	putchar('\n');
	return (0);
}
