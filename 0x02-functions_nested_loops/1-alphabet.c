#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - prints alphabets
 *
 * Return: nothing
 */

void print_alphabet(void)
{
int count;
count = 0;
while (count < 26)
{
_putchar(97 + count);
count += 1;
}
_putchar('\n');
}
