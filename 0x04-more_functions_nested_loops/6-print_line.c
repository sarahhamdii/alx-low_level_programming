#include "main.h"

/**
 * print_line - check the code
 *
 * Return: void
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n <= 0)
			_putchar('\n');
		else 
			_putchar('_');
	}
	_putchar('\n')
}
