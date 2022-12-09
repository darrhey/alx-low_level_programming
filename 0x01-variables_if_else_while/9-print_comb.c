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
putchar(48 + a);
if (a < 9)
{
putchar(',');
putchar(' ');
}
else
{
break;
}
}
putchar('\n');
return (0);
}
