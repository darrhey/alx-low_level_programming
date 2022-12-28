#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string followed by newline
 * @str: string to be printed alternatively
 */

void puts_half(char *str)
{
int lenght;
int a;
lenght = strlen(str);
 for (a = (lenght / 2); a <= lenght; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
