#include <unistd.h>
#include<stdlib.h>
#include "main.h"
/**
 * times_table - prints the 9 times table
 * starting with 0
 *
 * Return: nothing
 */

void times_table(void)
{
int n;
int m;
int p;
n = 0;
while (n <= 9)
{
m = 0;
while (m <= 9)
{
p = n *m;
if (p >= 10)
{
_putchar((p / 10) + 48);
_putchar((p % 10) + 48);
}
else if (m == 0)
{
_putchar(p + 48);
}
else
{
_putchar(' ');
_putchar(p + 48);
}
if (m < 9)
{
_putchar(',');
_putchar(' ');
}
m++;
}
_putchar('\n');
n++;
}
}
