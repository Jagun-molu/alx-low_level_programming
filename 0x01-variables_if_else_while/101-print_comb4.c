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
	int numb;

	for (number = 0; number < 8; number++)
	{
		for (num = number + 1; num < 9; num++)
		{
			for (numb = num + 1; numb <= 9; numb++)
			{
				putchar('0' + number);
				putchar('0' + num);
				putchar('0' + numb);
				if (!(number == 7 && num == 8 && numb == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);

}
