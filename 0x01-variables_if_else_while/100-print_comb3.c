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

	for (number = 0; number < 9; number++)
	{
		for (num = number + 1; num <= 9; num++)
		{
			putchar('0' + number);
			putchar('0' + num);
			if (number != 8 && number != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);

}
