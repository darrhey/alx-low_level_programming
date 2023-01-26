#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: const char type
 * @n: const unsigned integer type
 *
 * Return: nothing;
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
va_start(list, n);
for (i = 0; i < (n - 1); i++)
{
printf("%d", (va_arg(list, int)));
if (separator != NULL)
printf("%s", separator);
}
printf("%d", (va_arg(list, int)));
printf("\n");
va_end(list);
}
