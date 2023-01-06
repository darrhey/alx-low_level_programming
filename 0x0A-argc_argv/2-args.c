#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argcv: array of pointers to arg strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
if (argc >= 1)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
return (0);
}
