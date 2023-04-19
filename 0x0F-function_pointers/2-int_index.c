#include <stdio.h>
#include "function_pointers.h"

/*
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer
 *
 * Return: 0 or -1 
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				cmp(array[i]);
				return (i);
			}
		}
	}
	return (-1);
}
