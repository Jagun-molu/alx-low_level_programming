#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}
	printf("\n");

	return (0);

}
