#include "main.h"

/**
 * print_integer - Prints the given integer to the standard output.
 *
 * @a: The integer to be printed.
 */
void print_integer(int a)
{
	if (a / 10)
	{
		print_integer(a / 10);
	}
	_putchar(a % 10 + '0');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;
	char c1[] = "Fizz", c2[] = "Buzz", c3[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		j = 0;
		if (i % 15 == 0)
		{
			while (c3[j] != '\0')
			{
				_putchar(c3[j]);
				j++;
			}
		}
		else if (i % 3 == 0)
		{
			while (c1[j] != '\0')
			{
				_putchar(c1[j]);
				j++;
			}
		}
		else if (i % 5 == 0)
		{
			while (c2[j] != '\0')
			{
				_putchar(c2[j]);
				j++;
			}
		}
		else
		{
			print_integer(i);
		}
		if (i != 100)
		{
			_putchar(' ');
		}
	}
	return (0);
}
