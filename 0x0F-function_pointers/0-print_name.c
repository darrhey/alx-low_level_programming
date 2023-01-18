#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name - char * type
 * @f - function pointer type
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
if (name != NULL)
{
f(name);
}
}
}
