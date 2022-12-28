#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be printed alternatively
 */

void puts2(char *str)
{
int lenght;
int a;
lenght = strlen(str);
while (str[a] != '\0')
{
for (a = 0; a <= lenght; a += 2)
{
_putchar(str[a]);
}
}
_putchar('\n');
}
