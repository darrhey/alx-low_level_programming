#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free memory
 * @grid: pointer to grid
 * @height: rows of array
 * Return: free up memory
*/

void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || grid == 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
