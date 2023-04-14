#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 ** array_range - prints buffer in hexa
 * @min: small number
 * @max: large number
 *
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int *ar;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (min - max +1);

	if (ar == NULL)
		return (NULL);

	return (ar);
}
