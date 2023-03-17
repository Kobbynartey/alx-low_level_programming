#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @size bytes each and returns a pointer to the allocated memory.
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		*(b + 1) = 0;
	return ((void *)b);
}
