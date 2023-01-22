#include <unistd.h>
#include<stdlib.h>
#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: integer type
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
int last;
last = n % 10;
_putchar('0' + last);
return (last);
}
