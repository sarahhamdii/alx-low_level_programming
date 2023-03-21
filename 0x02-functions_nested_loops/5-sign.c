#include "main.h"
/**
 * print_sign - check the code
 * @n: number to be cheked
 * Return: 1 if positive or -1 if  negative or 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n < 0)
	{
			_putchar (45);
			return (-1);
	}
	else
	{
		_putchar (48);
		return (0);
	}
}
