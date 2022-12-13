#include <unistd.h>
#include "main.h"
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */

void print_alphabet_x10(void)
{
char letter;
int repeat_times;
repeat_times = 0;
while (repeat_times < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar("\n");
repeat_times++;
}
}
#include <unistd.h>
#include "main.h"
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */

void print_alphabet_x10(void)
{
int count;
int m;
int repeat_times;
count = 0;
for (repeat_times = 0; repeat_times < 10; repeat_times++)
{
while (count < 26)
{
m = _putchar(97 + count);
count += 1;
}
write(1, &m, 1);
}
}
