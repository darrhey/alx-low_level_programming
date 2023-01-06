#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - addc positivec numbers
 * @argc: argument count
 * @argcv: array of pointers to arg strings
 * Return: sum of addition or 1
 */

int main(int argc, char *argv[])
{
int sum;
int i;
int num;
sum = 0;
for (i = 1; i < argc; i++)
{
num = argv[i];
 if (num <= -1) || (!(isdigit(num)))
{
printf("Error\n");
return (1);
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
