#include "main.h"

/**
 * print_numbers - prints numbers from 0 t0 9
 * Return: 0 as success
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}
