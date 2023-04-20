#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculate summation
 * @n: constant number
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list a;

	if (n == 0)
		return (0);

	va_start(a, n)

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(a, int);
	}

	va_end(a);

	return (sum);
}
