#include<stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
char a;
for (a = '0'; a <= '9'; a++)
{
if (a < 9)
{
putchar(a);
putchar(',');
putchar(' ');
}
else
{
putchar(a);
}
}
return (0);
}
