#include <unistd.h>
#include<stdlib.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: nothing
 */

void jack_bauer(void)
{
int a, b, c, d;
a = 0;
while (a <= 2)
{
b = 0;
while (b <= 9)
{
c = 0;
while (c <= 5)
{
d = 0;
while (d <= 9)
{
_putchar('0' + a);
_putchar('0' + b);
_putchar(58);
_putchar('0' + c);
_putchar('0' + d);
_putchar('\n');
d++;
}
c++;
}
b++;
}
a++;
}
}