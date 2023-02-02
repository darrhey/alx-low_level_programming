#include <stdio.h>
#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: string to be converted
 * Return: the converted number or 0 if b contains value other than 0 or 1
 */
unsigned int binary_to_unit(const char *b)
{
unsigned int i, j;
if (!b || !*b)
return (0);
i = j = 0;
while (b[j])
{
if (b[j] > 49)
return (0);
else if (b[j] == 49)
{
i <<= 1;
i += 1;
}
else
{
i <<=1;
}
j++;
}
return (i);
}
