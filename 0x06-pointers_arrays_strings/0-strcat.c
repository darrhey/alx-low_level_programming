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
  strcat(dest, src);
  return (*dest);
}
