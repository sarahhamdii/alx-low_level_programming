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
	int z;

	for (x = 0; x < size; x++)
	{
		for (y = size - x; y > 1; y--)
		{
			_putchar(' ');
		}
		for (z = 0; z <= x; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
