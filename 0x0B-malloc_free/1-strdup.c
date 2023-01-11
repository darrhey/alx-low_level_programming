#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *which contains a copy of the string given as a parameter
 * @str: pointer to string
 * Return: pointer to string created
 */

char *_strdup(char *str)
{
char *p;
int i;
int j;
if (str == NULL)
{
return (NULL);
}
i = _strlen(str) + 1;
p = malloc((size) * sizeof(char));
j = 0;
while (j < i)
{
if (p == NULL)
{
return (NULL);
}
p[j] = str[j];
j++;
}
return (p);
}
