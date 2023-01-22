#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lowercase, followed by a new line
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
int count;
int repeat_times;
repeat_times = 0;
while (repeat_times < 10)
{
count = 0;
while (count < 26)
{
_putchar(97 + count);
count += 1;
}
_putchar('\n');
repeat_times++;
}
}
