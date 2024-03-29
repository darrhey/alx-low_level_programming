#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: 1 if a string is palindrome, 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp((s1 + 1), (s2 + 1)));
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, (s2 + 1)));
if (wildcmp((s1 + 1), s2) || wildcmp(s1, (s2 + 1)))
return (1);
}
return (0);
}
