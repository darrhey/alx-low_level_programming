#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
int a;
int lenght;
int c;
lenght = strlen(s);
for (a = 0; a < (lenght / 2); a++)
{
c = s[a];
s[a] = s[lenght - a - 1];
s[lenght - a - 1] = c;
}
}
