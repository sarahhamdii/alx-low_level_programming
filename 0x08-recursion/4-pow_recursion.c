#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to the power of y
 * @x: integer
 * @y: integer
 *
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int i = 0;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	i = x * _pow_recursion(x, y - 1);
	return (i);
}
