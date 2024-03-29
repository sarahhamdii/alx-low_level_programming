#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - print in hexa
 * @size: the size of the memory to print
 * @c: character
 * Return: NULL or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
