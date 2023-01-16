#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: the string to be extended
 * @src: the string to be appended
 * Return: a pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int len1 = 0;
while (dest[i])
len1++;
for (i = 0; src[i]; i++)
{
dest[len++] = src[i];
}
return (dest);
}
