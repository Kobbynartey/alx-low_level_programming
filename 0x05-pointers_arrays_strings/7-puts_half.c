#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: 0 as success
 */

void puts_half(char *str)
{
	int a, n, new_str;

	new_str = 0;

	for (a = 0; str[a] != '\0'; a++)
		new_str++;

	n = (new_str / 2);

	if ((new_str % 2) == 1)
		n = ((new_str + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
