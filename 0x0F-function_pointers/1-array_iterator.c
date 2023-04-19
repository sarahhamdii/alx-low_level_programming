#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: array
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if(action != NULL && array != NULL)
	{
		for(i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
