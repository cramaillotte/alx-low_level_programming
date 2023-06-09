#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: num of arguments
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args_to_sum;

	if (n == 0)
		return (0);

	va_start(args_to_sum, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args_to_sum, int);
	}

	va_end(args_to_sum);

	return (sum);
}
