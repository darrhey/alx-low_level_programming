#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator - const char type
 * @n - const unsigned integer type
 * @... - elipsis
 *
 * Return: nothing;
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
va_start(list, n);
int i;
int j;
for (i = 0; i < n; i++)
{
j = va_arg(list, int);
if (j != NULL)
{
printf("%d", j);
}
else
{
printf("(nil)");
}
if ( separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(list);
}
