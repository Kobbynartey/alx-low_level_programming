#include <stdio.h>

/**
 * main - prints the name followed by new line
 *@argc: is an argument counter for char.
 *@argv: is an argument value for char.
 *Return: Returns 0 as success
**/

int main(int argc, char *argv[])
{
	int i = argc - argc;

	printf("%s\n", argv[i]);

	return (0);
}
