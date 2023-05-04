#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * get_bit -  function that returns the value of a bit
 * @n: long integer
 * @index: integer
 *
 * Return: the value of the bit at index index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	for (i = 0; index <= 63; i++)
	{
		i = (n >> index) & 1;
		return (i);
	}
	return (i);
}
