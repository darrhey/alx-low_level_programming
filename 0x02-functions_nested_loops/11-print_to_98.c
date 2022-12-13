#include <unistd.h>
#include<stdlib.h>
#include "main.h"
/**
 * add - Takes two integers to return their sum.
 */

void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
_putchar(n);
n++;
}
}
else
{
while (n >= 98)
{
_putchar(n);
n--;
}
}
}
