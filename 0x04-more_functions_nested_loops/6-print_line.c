#include <unistd.h>
#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: parameter for number of lines
 * Return: 0 on success. Error code otherwise
 */

void print_line(int n)
{
while (n > 0)
{
_putchar(95);
n -= 1;
}
_putchar('\n');
return (0);
}
