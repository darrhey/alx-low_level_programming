#include<stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
int l;
for (l = 26; l > 0; l--)
{
putchar(96 + l);
}
putchar('\n');
return (0);
}
