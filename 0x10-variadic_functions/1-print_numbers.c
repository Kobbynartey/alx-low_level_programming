#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - Print numbers
 * @separator: char separating numbers
 * @n: number of iterations
 * return: Returns an int
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int val;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(list, int);
		printf("%d", val);
		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
