#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 * @s: string
 * Return: s
 */

void rev_string(char *s)
{
	int i = 0; x = 0;
	char c;

	while (s[x++])
		i++;

	for (x = i - 1; x >= i / 2; x--)
	{
		c = s[x];
		s[x] = s[i - x - 1];
		s[i - x - 1] = c;
	}
}
