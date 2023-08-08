#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Description
 * @grid: pointer
 * @height: int
 * Description: recursion
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
