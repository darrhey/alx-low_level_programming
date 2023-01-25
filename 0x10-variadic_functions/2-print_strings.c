#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: const char type
 * @n: const unsigned integer type
 *
 * Return: nothing;
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int j;
va_list list;
va_start(list, n);
for (i = 0; i < n; i++)
{
j = va_arg(list, char *);
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
