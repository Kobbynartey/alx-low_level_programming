#include "main.h"

/**
 * create_array - creates an array of chars & initializes with specific char
 *
 * @size: is the size of the integer
 * @c: is a char
 *
 * Return: Returns null or pointer to the array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);

}
