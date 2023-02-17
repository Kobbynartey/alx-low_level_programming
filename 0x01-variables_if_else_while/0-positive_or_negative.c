#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints whether the number is positive or negative
 *
 * Return: (0) after code is successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is postive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}

	return (0);
}
