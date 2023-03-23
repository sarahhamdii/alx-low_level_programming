#include "main.h"

/**
 * print_triangle - check the code
 * @size: number
 * Return: void
 */

void print_triangle(int size)
{
	int x;
	int y;

	for (x = 0; x <= size; x++)
	{
		for (y = 0; y <= size; y++)
		{
			_putchar('#'_);
			_putchar('\n');
		}
	}
	if (size <= 0)
		_putchar('\n');
}
