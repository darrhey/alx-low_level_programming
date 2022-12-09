#include<stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar(48 + num);
}
putchar('\n');
return (0);
}
