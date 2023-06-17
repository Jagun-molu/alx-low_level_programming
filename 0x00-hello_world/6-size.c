#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n\n", sizeof(long int));
	printf("Size of a long long: %zu byte(s)\n\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
