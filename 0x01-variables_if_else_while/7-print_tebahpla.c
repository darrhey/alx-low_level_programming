#include<stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
char a;
for (a = 'z'; a <= 'a'; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}
