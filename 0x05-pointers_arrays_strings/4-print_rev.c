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
  int lenght, a;
  char *start, *end, str;
  lenght = strlen(s);
  start = s;
  end = s;
  for (a = 0; a < (lenght/2); a++)
    {
      str = *end;
      *end = *start;
      *start = str;
      start++;
      end--;
    }
  puts(a);
}
