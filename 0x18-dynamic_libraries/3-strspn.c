#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, len;
	int num = 0;

	len = strlen(accept);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (j == len)
			break;
		for (j = 0; j < len; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
				break;
			}
		}
	}
	return (num);
}
