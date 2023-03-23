#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that sums all numbers given
 * @n : integer
 * Return: sum if success or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	va_start(list, n);

	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);

}
