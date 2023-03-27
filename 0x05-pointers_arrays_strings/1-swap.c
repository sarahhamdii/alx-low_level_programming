#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: first number
 * @b: second number
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
