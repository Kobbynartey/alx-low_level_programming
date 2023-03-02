#include "main.h"

/**
 * char *_strncat - concatenates 2 strings, uses most n bytes from src
 * @dest: string 1
 * @src: string 2
 * @n: input value
 * Return: resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
