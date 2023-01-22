#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the
 * operation asked by the user
 * @s: The operator
 * Return: A pointer to a function corresponding to
 * what user supplied
 **/

int (*get_op_func(char *s))(int, int)
{
  op_t ops[] = {
    {"+", op_add},
    {"-", op_sub},
    {"*", op_mul},
    {"/", op_div},
    {"%", op_mod},
    {NULL, NULL}
  };
int i;
i= 0;
while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;
return (ops[i].f);
}
