#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code
 * @s1: first character
 * @s2: second character
 * @n: number
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1 = 0;
	unsigned int lenght = sizeof(s2); 
	int i;
	char *ar;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1])
		size1++;

	while (s2[n])
		n++;

	ar = (char *)malloc(size1 + n + 1);

	for (i = 0; i < size1; i++)
		ar[i] = s1[i];
	while (n >= lenght)
		ar[i]=s2[i];
	return (ar);
}
