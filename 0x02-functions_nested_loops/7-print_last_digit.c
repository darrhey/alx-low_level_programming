#include <unistd.h>
#include<stdlib.h>
#include "main.h"
/**
 * print_last_digit - Takes any integer to return its last digit.
 */

int print_last_digit(int n)
{
int m;
m = abs(n);
int last;
last = m % 10;
_putchar('0' + last);
return (last);
}

