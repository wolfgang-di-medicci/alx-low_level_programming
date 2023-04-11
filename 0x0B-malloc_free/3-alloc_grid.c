#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2D array of integer
 * @width: row size of array
 * @height: coloumn size of array
 * Return: a 2D pointer array, when failure 0
*/

int **alloc_grid(int width, int height)
{
	int i, j, **pointer;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pointer = (int **) malloc(height * sizeof(int *));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pointer[i] = (int *) malloc(width * sizeof(int));
		if (pointer[i] == NULL)
		{
			for (; i >= 0; i--)
				free(pointer[i]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			pointer[i][j] = 0;
		}
	}
	return (pointer);
}
