#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: void
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y / 10)
				_putchar((y / 10) + '0');
			_putchar((y % 10) + '0')
		}
		_putchar ("\n");
	}
}
