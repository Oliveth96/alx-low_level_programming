#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free-gird - frees a 2 dimensional grid
 * @grid: the address of the two dimensional grids
 * @height: height of the grid
 *
 * Description: print_chessboard
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
