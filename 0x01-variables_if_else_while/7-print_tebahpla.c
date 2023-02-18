#include <stdio.h>

/**
 * main - Print alphabets in lowercase letters in reverse
 *
 * Return:(0) as a Success
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);
	putchar('\n');
	return (0);
}
