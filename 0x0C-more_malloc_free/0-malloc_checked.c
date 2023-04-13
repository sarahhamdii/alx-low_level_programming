#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code
 * @b: integrer
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *ar;

	ar = malloc(b);
	
	if (ar == NULL)
		exit(98);
	return(ar);
}
