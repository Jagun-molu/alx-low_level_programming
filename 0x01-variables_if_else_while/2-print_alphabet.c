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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);

}
