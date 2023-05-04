#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: long integer
 * @m: long integer
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int z;
	unsigned long int num;

	z = n ^ m;

	for (num = 0; z != 0; z = z >> 1)
	{
		num += z & 1;
	}
	return (num);
}
