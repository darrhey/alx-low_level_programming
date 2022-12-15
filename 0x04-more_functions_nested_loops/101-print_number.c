#include <unistd.h>
#include <stdlib.h>
#include <inttypes.h>
#include "main.h"
/**
 * print_number - display number 
 * @n: integer
 */

void print_number(int n)
{
int m;
m = abs(n);
if (n < 0)
{
_putchar('-');
}
if (m > 10000)
{
_putchar((m / 10000) + '0');
_putchar(((m % 10000) / 1000) + '0');
_putchar((((m % 10000) % 1000) / 100) + '0');
_putchar(((((m % 10000) % 1000) % 100) / 10) + '0');
_putchar(((((m % 10000) % 1000) % 100) % 10) + '0');
}
else if ((m < 10000) && (m >= 1000))
{
_putchar((m / 1000) + '0');
_putchar(((m % 1000) / 100) + '0');
_putchar((((m % 1000) % 100) / 10) + '0');
_putchar((((m % 1000) % 100) % 10) + '0');
}
else if ((m < 1000) && (m >= 100))
{
_putchar((m / 100) + '0');
_putchar(((m % 100) / 10) + '0');
_putchar(((m % 100) % 10) + '0');
}
else if ((m < 100) && (m >= 10))
{
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
}
else
{
_putchar(m + '0');
}
}
