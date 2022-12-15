#include <unistd.h>
#include "main.h"
/**
 * print_square - prints square(s), followed by new line
 * @size: parameter for number of square(s)
 */

void print_triangle(int size)
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
_putchar('#');
b += 1;
}
_putchar('\n');
a += 1;
}
}
else
{
_putchar('\n');
}
}
