#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n - const unsigned integer type
 * @... - elipsis
 *
 * Return: sum of all parameter but 0 if n is 0;
 **/

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
if (n == 0)
{
return (0);
} 
va_start(ap, n);
int sum = 0;
unsigned int i;
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}
