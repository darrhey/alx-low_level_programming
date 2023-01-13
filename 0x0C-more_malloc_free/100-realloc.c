#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to old memory
 * @old_size: ui type
 * @new_size: ui type
 * Return: pointer to the newly ccreated array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
if (new_size > old_size)
{
p = malloc(new_size);
free(ptr);
return (p);
}
if (new_size == old-size)
{
return (ptr);
}
if (ptr == NULL)
{
p = malloc(new_size);
free(ptr);
return (p);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
