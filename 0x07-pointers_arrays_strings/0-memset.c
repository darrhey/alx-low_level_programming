#include <unistd.h>
#include<ctype.h>
#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: the string to be extended
 * @src: the string to be appended
 * Return: a pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
  int s1;
  int s2;
  int t;
  s1 = strlen(dest);
  s2 = strlen(src);
  t = s1 + s2;
  char dest[t];
  strcat(dest, src);
  return (*dest);
}
