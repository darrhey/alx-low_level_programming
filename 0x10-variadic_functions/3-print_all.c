#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints any value
 * c = char, i = int, f = float, s = char *, NULL = (nil)
 * @format: argument type
 *
 * Return: nothing;
 **/

void print_all(const char * const format, ...)
{
int i, j;
char *separator;
i = 0;
j = 0;
char *str;
separator = ", ";
va_list list;
va_start(list, format);
while (format && format[i])
i++;
while (format && format[j])
{
if (j == (i - 1))
{
separator = "";
}
switch (format[j])
{
case 'c':
printf("%c%s", va_arg(list, int), separator);
break;
case 'i':
printf("%c%s", va_arg(list, int), separator);
break;
case 'f':
printf("%c%s", va_arg(list, int), separator);
break;
case 's':
str = va_arg(list, char *);
if (str == NULL)
{
str = "(nil)";
}
printf("%c%s", va_arg(list, int), separator);
break;
}
j++;
}
printf("\n");
va_end(list);
}
