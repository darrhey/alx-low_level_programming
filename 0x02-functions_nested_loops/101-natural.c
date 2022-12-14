#include <unistd.h>
#include<stdlib.h>
#include "main.h"
/**
 * Main - Program entry point
 *
 * Return 0 on success and otherwise if error.
 */

int main()
{
int three;
int five;
int sum_of_3;
int sum_of_5;
int total;
three = 3;
five = 5;
sum_of_3 = 0;
sum_of_5 = 0;
total = 0;
while (three < 1024)
{sum_of_3 = three;
three += 3;
}
while (five < 1024)
{
sum_of_5 = five;
five += 5;
}
total = sum_of_3 + sum_of_5;
_putchar((total / 10000) + 48);
_putchar(((total % 10000) / 1000) + 48);
_putchar((((total % 10000) % 1000) / 100) + 48);
_putchar(((((total % 10000) % 1000) % 100) / 10) + 48);
_putchar(((((total % 10000) % 1000) % 100) % 10) + 48);
return (0);
}
