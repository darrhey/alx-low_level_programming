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
int num1;
int num2;
int num3;
int item;
num1 = 1;
num2 = 2;
item = 50;
printf("%d, %d", num1, num2);
while (item > 0)
{
num3 = num1 + num2;
num1 = num2;
num2 = num3;
printf(", %d",num3);
item--;
}
return (0);
}
