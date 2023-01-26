#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings, followed by a new line
 * @separator: const char type
 * @n: const unsigned integer type
 *
 * Return: nothing;
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *string;
va_list list;
va_start(list, n);
for (i = 0; i < (n - 1); i++)
{
string = va_arg(list, char *);
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}
if (i != (n - 1))
{
if (separator != NULL)
{
printf("%s", separator);
}
}
}
va_end(list);
printf("\n");
}
