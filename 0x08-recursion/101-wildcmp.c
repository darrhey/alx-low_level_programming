#include "main.h"

int find(char *s, int alpha, int beta);
int _strlen_recursion(char *s);
/**
 * wildcmp - compares two strings
 * @s1: string to be checked
 * @s2: string to be checked
 * Return: 1 if a string is palindrome, 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
int i, j;
i = _strlen_recursion(s1);
j = _strlen_recursion(s2);
if (s1[i] != s2[j])
return (0);
if (s1[i] == s2[j] && i == j)
return (1);
else if (s1[i] == s2[j] && i > j)
return (1);
else
return (wildcmp(s, (alpha + 1), (beta + 1)));
}

/**
 * _strlen_recursion - returns length of a string
 * @s: string to be measured
 * Return: length of string s
 */

int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion((s + 1)));
}
return (0);
}
