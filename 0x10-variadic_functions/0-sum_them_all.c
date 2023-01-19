#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all parameters
 * @n - const unsigned integer type
 * @... - elipsis
 *
 * Return: sum of all parameter but 0 if n is 0;
 **/

int sum_them_all(const unsigned int n, ...)
{
int add;
add = 0;
va_list list;

va_start(list, n);

int i;
for (i = 0; i < n; i++)
{
add += va_arg(list, int);
}
va_end(list);
return (add);
}
