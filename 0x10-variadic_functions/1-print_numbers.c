#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print
 * @separator: string
 * @n: number
 *
 * Return: num
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list a;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(a, int);
		if (separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", num);
		
	}
	printf("\n");
	va_end(a);
}
