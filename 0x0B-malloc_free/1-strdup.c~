#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars,
 * initializes it with a specific char
 * @size: ui type
 * @c: char type
 * Return: pointer to an array created
 */

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
if (size == 0)
{
return (NULL);
}
p = malloc((size) * sizeof(char));
if (p == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
p[i] = c;
i++;
}
p[i] = '\0';
return (p);
}
