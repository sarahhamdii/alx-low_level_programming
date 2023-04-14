#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: first int
 * @size: second int
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	ar = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ar[i] = 0;

	return (ar);
}
