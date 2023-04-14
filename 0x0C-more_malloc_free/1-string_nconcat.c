#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - check the code
 * @s1: first character
 * @s2: second character
 * @n: number
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int i;
	char *ar;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1])
		size1++;

	while (s2[size2])
		size2++;

	if (n >= size2)
		n = size2;

	ar = (char *)malloc(size1 + size2 + 1);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		ar[i] = s1[i];

	for (i = size1; i < (n + size1); i++)
		ar[i] = s2[i - size1];

	ar[i] = '\0';

	return (ar);
}
