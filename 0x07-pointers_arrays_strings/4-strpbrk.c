#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: character
 *
 * Return: number or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int len, len2, i, j;

	len = strlen(s);
	len2 = strlen(accept);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
