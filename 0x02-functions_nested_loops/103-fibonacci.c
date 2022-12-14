#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * Main - Program entry point
 *
 * Return 0 on success and otherwise if error.
 */

int main(void)
{
unsigned long int num1;
unsigned long int num2;
unsigned long int num3;
unsigned long int max;
unsigned long int sum;
num1 = 1;
num2 = 2;
max = 4000000;
while (num3 < max)
{
sum = 2;
num3 = num1 + num2;
num1 = num2;
num2 = num3;
if ((num3 % 2) == 0)
{
sum += num3;
}
}
printf("%lu\n", sum);
return (0);
}
