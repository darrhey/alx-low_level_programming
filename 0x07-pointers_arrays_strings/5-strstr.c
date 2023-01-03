#include <string.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be checked
 * Return: pointer to the substring but NULL when absent
 */

char *_strstr(char *haystack, char *needle)
{
char* q;
q = strstr(haystack, needle);
if (q)
{
return (needle);
}
else
{
return (NULL);
}
}
