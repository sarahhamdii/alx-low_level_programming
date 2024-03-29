#include <stdio.h>
#include "main.h"

/**
 * set_bit -  function that sets the value of a bit to 1
 * @n: pointer
 * @index: integer
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= 1 << index;
	return (1);
}
