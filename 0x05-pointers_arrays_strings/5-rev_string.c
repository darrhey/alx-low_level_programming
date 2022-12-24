#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: string in reverse
 */

void rev_string(char *s)
{
int a;
a = 0;
while (s[a] != '\0')
{
a++;
}
char word[a];
for (a -= 1; a >= 0; a--)
{
word[a] = s[a];
}
return (word);
}
