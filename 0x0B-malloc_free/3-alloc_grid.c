#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * **aloc_grid - returns a pointer to a 2c dim array of integers
 * @width: column of array
 * @height: rows of array
 * Return: a pointer to 2D array of int
*/

int **alloc_grid(int width, int height)
{
int i;
int j;
int **p;
if (width <= 0 || height <= 0)
{
return (NULL);
}
p = malloc(height * sizeof(int *));
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
p[i] = malloc(width * sizeof(int));
if (p[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(p[j]);
free (p);
return (NULL);
}
for (j = 0; j < width; j++)
{
p[i][j] = 0;
}
}
return (p);
}
