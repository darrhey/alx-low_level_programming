#include <unistd.h>
#include "main.h"
/**
 * declaring a void function
 *
 * Return: 0 on success. Error code otherwise
 */

void print_alphabet_x10(void)
{
int count;
int repeat_times;
count = 0;
for (repeat_times = 0; repeat_times < 10; repeat_times++)
{
while (count < 26)
{
_putchar(97 + count);
count += 1;
}
_putchar('\n');
}
}
