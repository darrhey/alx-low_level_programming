#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * on each element of an array
 * @array - int * type
 * @size - unsigned int data type
 * @action - function pointer type
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
i = 0;
if (array != NULL)
{
if (action != NULL)
{
if (size > 0)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
}
}
