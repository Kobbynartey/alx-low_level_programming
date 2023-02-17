#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10
 *
 * Return: (0) as Success
 */

int main(void)
{	int digit;

	for (digit = 0; digit < 10; digit++)
	printf("%i", digit);
	putchar('\n');
	return (0);
}
