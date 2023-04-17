#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - make 2D Grid.
 * @width: Input Integer width.
 * @height: Input Integer height.
 * Return: int pointer 2D array
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matrix = (int **) malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *) malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(matrix[j]);
			}
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
