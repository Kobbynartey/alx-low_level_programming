#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: is a counter of argument for int.
 * @argv: argument value to char
 * Return: Returns always success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}
