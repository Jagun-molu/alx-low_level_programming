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
	int n1;
	int n3;
	int n;
	int n2;

	for (n = 0; n <= 9; n++)
	{
		for (n3 = 0; n3 <= 9; n3++)
		{
			for (n2 = n; n2 <= 9; n2++)
			{
				for (n1 = 0; n1 <= 9; n1++)
				{
					if (!((n == n2 && n3 == n1) || (n == n2 && n3 > n1)))
					{
						putchar('0' + n);
						putchar('0' + n3);
						putchar(' ');
						putchar('0' + n2);
						putchar('0' + n1);
					}
					if (!(n == 9 && n3 == 8 && n2 == 9 && n1 == 9) && !(n == n2 && n3 >= n1))
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
