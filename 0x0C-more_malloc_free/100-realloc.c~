#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of int
 * @min: int type
 * @max: int type
 * Return: pointer to the newly ccreated array
 */

int *array_range(int min, int max)
{
int *p;
int r;
r = max - min;
int i;
if (min > max)
{
return (NULL);
}
p = malloc(sizeof(int) * (r + 1));
if (p == NULL)
{
return (NULL);
}
i = 0;
while (min <= max)
{
p[i] = min;
min++;
i++;
}
return (p);
}
