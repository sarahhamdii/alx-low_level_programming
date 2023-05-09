#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function that locates a character in a string
 * @s: pointer
 * @c: character
 *
 * Return: c or s or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
		return (s + i);
	else
		return (NULL);
}
