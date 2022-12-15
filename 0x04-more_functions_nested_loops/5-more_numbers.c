#include <unistd.h>
#include "main.h"
/**
 * more_numbers - display numbers from 0 to 14
 * Return: 0 on success. Error code otherwise
 */

void more_numbers(void)
{
int count;
int times;
times = 0;
while (times <= 10)
{
count = 0;
while (count <= 14)
{
if (count >= 10)
{
_putchar((count / 10) + 48);
_putchar((count % 10) + 48);
}
else
{
_putchar(count + 48);
}
count += 1;
}
_putchar('\n');
times += 1;
}
}
