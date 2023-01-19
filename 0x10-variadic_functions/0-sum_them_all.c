#include <stdarg.h>
#include "variable_functions.h"

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
int i = 0;
int sum = 0;
va_start(ap, n);
if (n <= 0)
{
return (0);
}
else
{
for (i = 0; i < n; i++)
{
sum += va_arg(ap, const unsigned int);
}

va_end(ap);
return (sum);
}
}
