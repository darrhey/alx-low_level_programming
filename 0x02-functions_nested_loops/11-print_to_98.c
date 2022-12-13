#include <unistd.h>
#include<stdlib.h>
#include "main.h"
/**
 * 
 */

void print_to_98(int n)
{
if (n <  98)
{
while (n <= 98)
{
if (n < 10){
_putchar(n+48);
}
else
{
_putchar(n/10 + 48);
_putchar(n%10 + 48);
}
_putchar(',');
_putchar(' ');
n++;
}
}
else
{
while (n >= 98)
{
if (n >= 100)
{
_putchar(n/100 + 48);
_putchar((n%100)/10 + 48);
_putchar((n%100)%10 + 48);
}
else
{
_putchar(n/10 + 48);
_putchar(n%10 + 48);
}
_putchar(',');
_putchar(' ');
n++;
}
}
}
