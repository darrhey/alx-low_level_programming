#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints products of two numbers
 * @argc: argument count
 * @argcv: array of pointers to arg strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
int product;
if (argc <= 1)
{
printf("Error\n")
return (1);
}
else
{
product = atoi(argv[0]) * atoi(argv[1]);
printf("%d\n", product);
return (0);
}
}
