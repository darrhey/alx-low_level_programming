#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string to be converted
 * Return: the converted number or 0 if b contains value other than 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int a, i, j;
j = 1;
if (!b || !*b)
return (0);
i = 0;
while (b[i])
{
if (b[i] > 49)
return (0);
i++;
}
i--;
a = 0;
do {
a += (b[i] - '0') * j;
j *= 2;
} while (i--);
return (a);
}
