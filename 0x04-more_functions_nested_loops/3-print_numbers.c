#include <unistd.h>
#include "main.h"
/**
 * print_numbers - display numbers from 0 to 9
 * Return: 0 on success. Error code otherwise
 */

void print_numbers(void)
{
int count;
count = 0;
while (count < 10)
{
_putchar(48 + count);
count += 1;
}
_putchar('\n');
}
