#include <unistd.h>
#include "main.h"
/**
 * print_most_numbers - display numbers from 0 to 9
 * without 2 and 4
 * Return: 0 on success. Error code otherwise
 */

void print_most_numbers(void)
{
int count;
count = 0;
while (count < 10)
{
if ((count != 2) || (count != 4))
{
_putchar(48 + count);
}
count += 1;
}
_putchar('\n');
}
