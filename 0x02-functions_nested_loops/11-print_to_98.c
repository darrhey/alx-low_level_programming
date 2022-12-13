#include <unistd.h>
#include<stdlib.h>
#include "main.h"
/**
 * 
 */

void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
write(1, &n, 3);
n++;
}
}
else
{
while (n >= 98)
{
write(1, &n, 3);
n--;
}
}
}
