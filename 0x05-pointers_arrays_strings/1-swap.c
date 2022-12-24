#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: parameter to be swapped
 * @b: parameter to be swapped
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
