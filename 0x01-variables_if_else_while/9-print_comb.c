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
	int num;

	for (number = 0; number <= 9; number++)
	{
		for (num = 0; num <=9; num++)
		{
			putchar('0' + number * 10 + num);
		}
	}
	printf("\n");

	return (0);

}
