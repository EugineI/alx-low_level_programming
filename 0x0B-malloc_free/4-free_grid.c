#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * free-grid - frees allocated memory
 *
 * @grid: 2D grid
 *
 * @height: grid height
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
