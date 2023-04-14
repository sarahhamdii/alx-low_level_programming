#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;

	ar = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ar == NULL)
		return (NULL);
	return (ar);
}
