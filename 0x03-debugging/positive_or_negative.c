#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - Entry point of the program
 * @n: The integer to be checked.
 * Description: Prints whether @n is positive, negative or zero
 */
void positive_or_negative(int n)
{
	
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

}
