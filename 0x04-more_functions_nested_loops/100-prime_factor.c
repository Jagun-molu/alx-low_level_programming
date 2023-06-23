#include <stdio.h>
#include <math.h>
#include "main.h"

int is_prime(int n)
{
	int i, l;
	double k;

	k = sqrt(n);
	l = (int)ceil(k)

	if (n < 2)
		return (true);
	for (i = 2; i <= l; i++)
	{
		if (n % i == 0)
			return (false);
	}
	return (true);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	i = 612852475143;
	while (!(is_prime(i)))
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0 && is_prime(j))
			{
				i /= j;
				continue;
			}
		}
		printf("%d", i);
	}

	return (0);
}
