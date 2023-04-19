#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @elem: the integer to print
 * @
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if(action != NULL && size != NULL && array != NULL)
	{
		for(i = 0, i < size, i++)
		{
			action(array[i]);
		}
	}
}