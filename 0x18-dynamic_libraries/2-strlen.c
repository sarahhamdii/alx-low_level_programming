#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 * @s: length of a string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
