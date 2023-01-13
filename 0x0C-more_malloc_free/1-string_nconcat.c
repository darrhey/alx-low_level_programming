#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: destination for concatenation
 * @s2: source of string
 * @n: unsigned integer type
 * Return: pointer to new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *dest;
int i;
dest = "";
char *q;
q = malloc(n)
char *p;
p = malloc(s2 + n + 1);
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; i < n; i++)
{
q =  strncat(dest, s1[i]);
}
p = strcat(s1, q);
return (p);
}
