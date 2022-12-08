#include<stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0 0n success. Error code otherwise
 */
int main(void)
{
int i;
char c;
long int li;
long long int lli;
float f;
printf("Size of a char: %lu \n",(unsigned long)sizeof(c));
printf("Size of an int: %lu \n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu \n", (unsigned long)sizeof(li));
printf("Size of a long long int: %lu \n", (unsigned long)sizeof(lli));
printf("Size of a float: %lu \n", (unsigned long)sizeof(f));
return (0);
}
