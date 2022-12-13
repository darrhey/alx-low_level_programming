#include <unistd.h>
#include "main.h"
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
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
