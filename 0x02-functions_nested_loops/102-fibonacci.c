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
unsigned long int item;
num1 = 1;
num2 = 2;
item = 50;
printf("%lu, %lu", num1, num2);
while (item > 2)
{
num3 = num1 + num2;
num1 = num2;
num2 = num3;
printf(", %lu", num3);
item--;
}
printf("\n");
return (0);
}
