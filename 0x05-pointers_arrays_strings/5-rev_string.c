#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0; index = 0;
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= i / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
