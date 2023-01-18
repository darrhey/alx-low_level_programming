#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array - int * type
 * @size - int type
 * @cmp - function pointer type
 * Return: -1 if no element matches or size <= 0
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
i = 0;
if (array != NULL && cmp != NULL && size > 0)
{
while (i < size)
{
if (cmp(array[i])){
return (i);
i++;
 }
}
}
return (-1);
}
