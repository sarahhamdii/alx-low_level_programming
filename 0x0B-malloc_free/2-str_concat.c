#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for ALX School students.
 * @s1: character one
 * @s2: character two
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int i;
	char *m;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 == "";

	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;

	m = (char *)malloc(size1 + size2 + 1);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		p[i] = s1[i];
	for (i = 0; i < size2; i++)
		m[s1[i]] = s2[i];
	return (m);
}
