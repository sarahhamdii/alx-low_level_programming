#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest;
	}
	return (dest);
}
