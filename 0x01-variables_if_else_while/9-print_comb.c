#include<stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
int a;
for (a = 0; a <= 9; a++)
{
if (a < 9)
{
putchar(48 + a);
putchar(',');
putchar(' ');
}
else
{
putchar(48 + a);
}
}
return (0);
}
