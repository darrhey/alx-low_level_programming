#include <unistd.h>
#include<stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer type
 * Return: nothing
 */

void print_to_98(int n)
{
if (n <=  98)
{
while (n < 98)
{
if (n < 10)
{
_putchar(n + '0');
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
_putchar(',');
_putchar(' ');
n++;
}
}
else
{
while (n > 98)
{
if (n >= 100)
{
_putchar((n / 100) + '0');
_putchar(((n % 100) / 10) + '0');
_putchar(((n % 100) % 10) + '0');
}
else
{
_putchar((n / 10) + '0');
_putchar((n  % 10) + '0');
}
_putchar(',');
_putchar(' ');
n--;
}
}
_putchar((n / 10) + '0');
_putchar((n  % 10) + '0');
}
