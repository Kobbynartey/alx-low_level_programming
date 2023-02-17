#include <stdio.h>

/**
 * Main - Prints Alphabets
 * Return: (0) as success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
