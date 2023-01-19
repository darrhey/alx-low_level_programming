#include <stdarg.h>
#include <stdio.h>
#include "variable_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator - const char type
 * @n - const unsigned integer type
 * @... - elipsis
 *
 * Return: nothing;
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
  va_list ap;
  unsigned int i = 0;

  va_start(ap, n);

  for (i = 0; i < n; i++)
    {
      printf("%d", va_arg(ap, int));
      if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
    }
  printf("\n");

  va_end(ap);
}
