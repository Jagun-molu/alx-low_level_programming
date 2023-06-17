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
	int n;
	int nos;

	for (n = 0; n <= 9; n++)
	{
		for (num = 0; num <= 9; num++)
		{
			for (nos = n; nos <= 9; nos++)
			{
				for (number = num + 1; number <= 9; number++)
				{
					putchar('0' + n);
					putchar('0' + num);
					putchar(' ');
					putchar('0' + nos);
					putchar('0' + number);
					if (!(n == 9 && num == 8 && nos == 9 && number == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);

}
