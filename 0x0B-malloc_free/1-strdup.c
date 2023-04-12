#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - write a function that returns a pointer
 *
 * Return: NULL
 */

char *_strdup(char *str)
{
	int size = 0 , i;
	char *s;

	if (str == NULL)
		return (NULL);

	s = (char *)malloc(size + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
