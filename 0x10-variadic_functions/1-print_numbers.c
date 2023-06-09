#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: numbers of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	int l;

	if (!separator)
		separator = "";

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		l = va_arg(nums, int);
		printf("%d", l);
		if (i < n - 1)
			printf("%s", separator);
	}

	va_end(nums);

	printf("\n");
}
