#include <variadic_functions.h>

/**
 * sum_them_all - function that sums all numbers given
 * @n : integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	va_start(list, n);

	int i, sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, const unsigned int);
	}

	va_end(list);

	return (sum);

}
