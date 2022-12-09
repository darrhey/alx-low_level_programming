#include<stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
int a;
int b;
for (a = 0; a < 9; a++)
{
for (b = a+1; b <= 9; b++)
{
if (a == b)
{
continue;
}
else
{
putchar(48 + a);
putchar(48 + b);
}
if ((a == 8) && (b == 9))
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
