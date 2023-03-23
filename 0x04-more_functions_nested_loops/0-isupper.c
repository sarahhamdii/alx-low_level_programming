#include "main.h"
#include <stdio.h>

/**
 * _isupper - checked
 * @c: number
 * Return: 1 if upper or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
