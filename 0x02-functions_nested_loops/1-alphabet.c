#include <unistd.h>
#include "main.h"
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */

int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
int count;
int m;
count = 0;
while (count < 26)
{
m = _putchar(97+count);
count += 1;
}
write(1, &m, 1);
write(1, "\n", 1);
}
