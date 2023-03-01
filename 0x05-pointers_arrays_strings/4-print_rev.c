#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int str = 0;
	int o;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	s--;
	for (i = str; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
