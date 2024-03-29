#include <stdio.h>
#include <string.h>
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
exit(96);
}
i = atoi(argv[1]);
op = argv[2];
j = atoi(argv[3]);
if (get_op_func(op) == NULL)
{
printf("Error\n");
exit(97);
}
if (((strcmp(op, "/") == 0) && (j == 0))
|| ((strcmp(op, "%") == 0) && (j == 0)))
{
printf("Error\n");
exit(98);
}
printf("%d\n",get_op_func(op)(i, j));
return (0);
}
