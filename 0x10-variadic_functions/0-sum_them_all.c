#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n - const unsigned integer type
 * @... - elipsis
 *
 * Return: sum of all parameter but 0 if n is 0;
 **/

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
va_list ap;
va_start(ap, n);
int i = 0;
int sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end(n);
return (sum);
}
