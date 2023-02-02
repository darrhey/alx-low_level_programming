#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a given bit at an index
 * @n: number to scan
 * @index: bit to return
 * Return: bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
int i;
i = ((n >> index) & 1);
if (index > 64)
return (-1);
return (i);
}
