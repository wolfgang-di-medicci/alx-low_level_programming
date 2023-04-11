#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the 2D array in the previous code
 * @grid: the input 2D array to be freed
 * @height: height of grid or row amount
 * Return: nothing when succesfull
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
