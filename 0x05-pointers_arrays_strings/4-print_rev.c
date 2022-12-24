#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a newline
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
int a;
a = 0;
while (s[a] != '\0')
{
a++;
}
for (a -= 1; a >= 0; a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
