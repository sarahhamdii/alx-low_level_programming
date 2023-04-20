#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print
 * @separator: string
 * @n: number of integers
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list a;

	va_start(a, n)
	for (i = 0; i < n; i++)
	{
		s = va_arg(a, char);
		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
