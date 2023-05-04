#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer
 */

void print_binary(unsigned long int n)
{ 
	int i;

	for (i = 63; i >= 0; i--)
	{
		_putchar((n >> i) & 1 ? '1' : '0');
	}
	if (n == 0)
		_putchar('0');
}
