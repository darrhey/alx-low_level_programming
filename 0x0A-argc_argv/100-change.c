#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the min number of coins to make
 *change for a given amount
 * @argc: argument count
 * @argcv: array of pointers to arg strings
 * Return: amount of cents or 1
 */

int main(int argc, char *argv[])
{
int coins;
int cents;
if (argc != 2)
{
printf("Error\n");
return (1);
}
coins = atoi(argv[1]);
cents = 0;
if (coins > 25)
{
while (coins >= 25)
{
coins -= 25;
cents++;
}
}
if ((coins > 10) && (coins < 25))
{
while (coins >= 10)
{
coins -= 10;
cents++;
}
}
if ((coins > 5) && (coins < 10))
{
while (coins >= 5)
{
coins -= 5;
cents++;
}
}
if ((coins > 2) && (coins < 5))
{
while (coins >= 2)
{
coins -= 2;
cents++;
}
}
if ((coins == 1) || (coins == 2) || (coins == 5) || (coins == 10) || (coins == 25))
{
cents++;
}
printf("%d\n", cents);
return (0);
}
