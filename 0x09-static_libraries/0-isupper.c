#include "main.h"

/**
 * _isupper - checked
 * @c: character
 * Return: 1 if upper or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
