#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: array of pointers to argument strings
 * Return: sum of addition or 1
 */

int main(int argc, int *argv[])
{
int sum;
int i;
int num;
sum = 0;
for (i = 1; i < argc; i++)
{
num = int argv[i];
if (num <= -1)
{
printf("Error\n");
return (1);
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
