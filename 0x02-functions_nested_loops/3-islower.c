#include <unistd.h>
#include<ctype.h>
#include "main.h"
/**
 * _islower - Check if entered value is lowercase or upper
 *
 * Return: 1 if lowercase but 0 if otherwise.
 */

int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
