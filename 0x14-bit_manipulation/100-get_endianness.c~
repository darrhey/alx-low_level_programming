#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you'll need to flip
 * @n: starting point
 * @m: target
 * Return: number bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i = 0;
unsigned long int xor;
xor = n ^ m;
while (xor)
{
i += xor & 1;
xor >>= 1;
}
return (i);
}
