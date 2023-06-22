#include <stdio.h>
#include <stdint.h>

/**
 * main - Prints first 50 fibonacci numbers
 *
 * Return: 0 Always
 */
int main(void)
{
	int i
	int64_t j, k, l;

	i = 3;
	j = 1LL;
	k = 2LL;
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
		printf("%lld", l);
		if (i != 50)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return 0;
}
