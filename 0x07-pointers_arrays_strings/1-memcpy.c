#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - function that copies memory area
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
