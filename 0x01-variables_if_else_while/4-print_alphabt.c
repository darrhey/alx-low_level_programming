#include<stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if ((a == 'e') || (a == 'q'))
{
continue;
}
else
{
putchar(a);
}
}
putchar('\n');
return (0);
}
