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
for (letter = 97; letter <= 122; letter++)
{
_putchar(letter);
}
_putchar("\n");
repeat_times++;
}
}
