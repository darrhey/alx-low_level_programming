#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * Main: this program prints the sum of all the multiples
 * of 3 and 5 below 1024
 *
 * Return: 0 on success and otherwise if error
 * Description: this prints the sum of all the multiples
 * of 3 and 5 below 1024
 */

int main(void)
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
{
if ((three % 5) != 0)
{
sum_of_3 += three;
}
three += 3;
}
while (five < 1024)
{
sum_of_5 += five;
five += 5;
}
total = sum_of_3 + sum_of_5;
printf("%d\n", total);
return (0);
}
