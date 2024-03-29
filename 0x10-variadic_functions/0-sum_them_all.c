#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: const unsigned integer type
 *
 * Return: sum of all parameter but 0 if n is 0;
 **/

int sum_them_all(const unsigned int n, ...)
{
int add = 0;
unsigned int i;
va_list list;
va_start(list, n);
for (i = 0; i < n; i++)
{
add += (va_arg(list, int));
}
va_end(list);
return (add);
}
