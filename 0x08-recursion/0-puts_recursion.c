#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @*S - character
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
    	}
	printf("%c", *s);

	_puts_rec(s + 1);
}
