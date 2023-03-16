#include "main.h"

int find(char *s, int alpha, int beta);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks for palindrome
 * @s: string to be checked
 * Return: 1 if a string is palindrome, 0 if otherwise
 */

int is_palindrome(char *s)
{
int i;
i = 0;
if (!*s)
{
return (1);
}
i = _strlen_recursion(s);
return (find(s, 0, (i - 1)));
}

/**
 * find - help find
 * @s: string to be checked
 * @alpha: front index
 * @beta: last index
 * Return: 1 if found, 0 otherwise
 */
int find(char *s, int alpha, int beta)
{
if (s[alpha] != s[beta])
return (0);
if (s[alpha] == s[beta] && alpha == beta)
return (1);
else if (s[alpha] == s[beta] && alpha > beta)
return (1);
else
return (find(s, (alpha + 1), (beta - 1)));
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
