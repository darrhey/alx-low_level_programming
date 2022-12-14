#include <unistd.h>
#include<stdlib.h>
#include "main.h"
/**
 *
 */

void print_times_table(int n)
{
int a;
int m;
int p;
a = 0;
while (a <= n)
{
m = 0;
while (m <= n)
{
p = a *m;
if (p >= 1000)
{
_putchar((p/1000) + 48);
_putchar(((p % 1000) / 100) + 48);
_putchar((((p % 1000) % 100) / 10) + 48)
_putchar((((p % 1000) % 100) % 10) + 48);
}
else if ((p >= 100) && (p < 1000))
{
_putchar(' ');
_putchar((p / 100) + 48);
_putchar(((p % 100) / 10) + 48);
_putchar(((p % 100) % 10) + 48);
}
else if (m == 0)
{
_putchar(p + 48);
}
else if ((p < 100) && (p >= 10))
{
_putchar(' ');
_putchar(' ');
_putchar((p / 10) + 48);
_putchar((p % 10) + 48);
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(p + 48);
}
if (m < n)
{
_putchar(',');
_putchar(' ');
}
m++;
}
_putchar('\n');
a++;
}
}
