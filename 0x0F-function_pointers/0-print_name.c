#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name - name
 * @f - function to print name as upper or not
 * Return: void
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
