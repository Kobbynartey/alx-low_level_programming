#include <main.h>

/**
 * main - Print alphabet in lowercase
 *
 * Return: (0) as success
 */

void print_alphabet(void)
{
	for (i = 'a', i <= 'z', i++)
	{
		_putchar(i);
	}

		_putchar("\n");
}


int main(void)
{
	print_alphabet();	

	return (0);
}
