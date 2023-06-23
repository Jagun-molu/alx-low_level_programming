#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * is_prime - Checks whether @n is prime
 * @n: The number to be checked.
 *
 * Return: 1 if @n is prime and 0 otherwise
 */

int is_prime(unsigned long int n)
{
	unsigned long int i, l;
	double k;

	k = sqrt(n);
	l = (unsigned long int)k + 1;

	if (n < 2)
		return (1);
	for (i = 2; i <= l; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

	unsigned long int i, j;

	i = 612852475143;
	while (is_prime(i) == 0)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0 && is_prime(j) == 1)
			{
				i /= j;
				continue;
			}
		}
		printf("%lu", i);
	}
	printf("\n");
	return (0);
}
