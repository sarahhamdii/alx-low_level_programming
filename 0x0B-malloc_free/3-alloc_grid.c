#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int w;
	int h;
	int **ar;

	if (width <= 0 && height <= 0)
		return (NULL);

	ar = (int **)malloc(sizeof(int *) * height);
	
	if (ar == NULL)
		return (NULL);
	for (w = 0; w < width; w++)
		free(ar[w]);
	for (h = 0; h < height; h++)
		free(ar[h]);
	free (ar);
}
