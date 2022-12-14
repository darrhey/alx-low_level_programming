#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * Main - Program entry point
 *
 * Return 0 on success and otherwise if error.
 */

long unsigned int main(void)
{
long unsigned int num1;
long unsigned int num2;
long unsigned int num3;
long unsigned int item;
num1 = 1;
num2 = 2;
item = 50;
printf("%lu, %lu", num1, num2);
while (item > 0)
{
num3 = num1 + num2;
num1 = num2;
num2 = num3;
printf(", %lu", num3);
item--;
}
return (0);
}
