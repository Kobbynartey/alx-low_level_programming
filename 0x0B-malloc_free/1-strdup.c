#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: string to be copied.
 * Return: NULL if str == NULL or insufficient memory if available - NULL.
 *         if success - a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		a[c] = str[j];
	a[j] = '\0';

	return (a);
}

}
