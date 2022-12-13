#include <unistd.h>
#include<stdlib.h>
#include "main.h"
/**
 * print_last_digit - Takes any integer to return its last digit.
 */

int print_last_digit(int n)
{
int last;
last = n%10;
return (last);
}

