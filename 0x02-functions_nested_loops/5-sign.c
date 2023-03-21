#include "main.h"
/**
 * _print_sign - check the code
 * @n: number
 * Return: 1 if greater than zero or -1 if  greater than zero or 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	eles if (n < 0)
		{
			putchar (45);
			return (-1);
		}
	else
	{
		putchar (48);
		return (0);
	}
}
