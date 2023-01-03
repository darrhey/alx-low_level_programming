#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of diagonals of square matrix
 * @a: the square matrix to be analysed
 * @size: the size of the square matrix
 */

void print_diagsums(int *a, int size)
{
int i;
int j;
int k;
int sum1;
int sum2;
sum1 = 0;
sum2 = 0;
k = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
sum1 += a[k];
}
if ((i + j) == (size - 1))
{
sum2 += a[k];
}
k++;
}
}
printf("%d, %d\n", sum1, sum2);
}
