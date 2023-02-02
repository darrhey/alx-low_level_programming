#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary of a number
 * @b: string to be converted
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
if (n >= 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
