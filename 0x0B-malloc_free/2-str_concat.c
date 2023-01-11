#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: string that other string will be added to
 * @s2: source of string
 * Return: pointer to copy of string
*/

char *str_concat(char *s1, char *s2)
{
char *p;
int i;
int j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
i = strlen(s1);
j = strlen(s2);
p = malloc(((i + j) + 1) * sizeof(char));
if (p == NULL)
{
return (NULL);
}
strncat(p, s1, i);
strncat(p, s2, j);
p += '\0';
return (p);
}
