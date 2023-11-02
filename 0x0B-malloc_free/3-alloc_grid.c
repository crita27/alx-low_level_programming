#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to 2d
 * @width: width
 * @height: height
 * Return: null, 0
 */
int** alloc_grid(int width, int height)
{
	int** grid;
	int i = 0, j = 0;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int**)malloc(height * sizeof(int*));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int*)calloc(width, sizeof(int));
		 if (grid[i] == NULL)
		 {
			  for (j = 0; j < i; j++)
			  {
				  free(grid[j]);
			  }
			  free(grid);
			  return (0);
		 }
	}
	return (0);
}
