#include "main.h"

/**
 * _isdigit - check
 * @x: number
 * Return: 1 for digit or 0 for anything else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
