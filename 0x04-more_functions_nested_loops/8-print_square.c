#include <unistd.h>
#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: parameter for number of square(s)
 * Return: 0 on success. Error code otherwise
 */

void print_square(int size)
{
int a;
int b;
a = 0;
if (size > 0)
{
while (a < size)
{
b = 0;
while (b < size)
{
_putchar(35);
b += 1;
}
_putchar('\n');
a += 1;
}
}
_putchar('\n');
}
