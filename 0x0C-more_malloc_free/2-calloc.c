#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: ui type
 * @size: ui type
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;
unsigned int a;
a = nmemb * size;
i = 0;
if ((nmemb == 0) || (size == 0))
{
return (NULL);
}
p = malloc(a);
if (p == NULL)
{
return (NULL);
}
while(i < a)
{
p[i] = 0;
i++;
}
return (p);
}
