#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer
 */

void print_binary(unsigned long int n)
{
	int i, j = 1;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1 || !j)
		{
			_putchar((n >> i) & 1 ? '1' : '0');
			j = 0;
		}
	}
	if (j)
		_putchar('0');
}
