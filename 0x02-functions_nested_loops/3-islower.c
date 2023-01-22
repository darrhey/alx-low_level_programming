#include <unistd.h>
#include<ctype.h>
#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @c: int type to be checked
 * Return: 1 if c is lowercase 0 if otherwise.
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
