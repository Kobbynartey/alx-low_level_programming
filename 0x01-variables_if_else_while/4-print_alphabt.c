#include <stdio.h>

/**
 * main - Print the alphabet in lowercase letters, except q and e
 *
 * Return: (0) as Success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
{
	if (letter != 'q' && letter != 'e')
	putchar(letter);
}
	putchar('\n');
	return (0);
}
