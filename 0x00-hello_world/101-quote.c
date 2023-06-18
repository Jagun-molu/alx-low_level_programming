#include <stdio.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char c[80];

	strcpy(c, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	fputs(c, stderr);
	return (1);
}
