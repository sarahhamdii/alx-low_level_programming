#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * @b: character
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num = num << 1;
		num = num + (b[i] - '0');
		i++;
	}
	return (num);
}
