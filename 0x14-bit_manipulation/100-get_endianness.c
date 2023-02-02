#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int i = 1;
char *p = (char *) & i;
if (*p)
return (1);
return (0);
}
