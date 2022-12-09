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
int c;
for (a = 0; a <= 7; a++)
{
for (b = a + 1; b <= 9; b++)
{
for (c = a + 2; c <= 9; c++)
{
if ((a == b) || (b == c) || (a == c))
{
continue;
}
else
{
putchar(48 + a);
putchar(48 + b);
putchar(48 + c);
}
if ((a == 7) && (b == 8) && (c == 9))
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
}
putchar('\n');
return (0);
}
