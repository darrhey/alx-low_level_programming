#include <unistd.h>
#include<ctype.h>
#include "main.h"
/**
 * _isupper - returns 1 if parameter entered is upper
 * @c: the parameter to be checked
 * Return: 1 if upper but 0 if otherwise
 */

int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
