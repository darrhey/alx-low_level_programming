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
int a, b;
a = 0;
while (a <= 23)
{
b = 0;
while (b <= 59)
{
_putchar('0' + (a / 10));
_putchar('0' + (a % 10));
_putchar(58);
_putchar('0' + (b / 10));
_putchar('0' + (b % 10));
_putchar('\n');
b++;
}
a++;
}
}
