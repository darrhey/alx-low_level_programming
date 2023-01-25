#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - prints result of simple arithmetic operations
 * @argc: number of arguments supplied
 * @argv: array of pointer to parameters
 * Return: 0
 **/

int main(int argc, char *argv[])
{
int i, j;
char *op;
if (argc != 4)
{
printf("Error\n");
exit(0);
}
i = atoi(argv[1]);
op = argv[2];
j = atoi(argv[3]);
if (get_op_func(op) == NULL)
{
printf("Error\n");
exit(1);
}
if (((op == "/") && (j == 0)) || ((op == "%") && (j == 0)))
{
printf("Error\n");
exit(2);
}
printf("%d\n",get_op_func(op)(i, j));
return (0);
}
