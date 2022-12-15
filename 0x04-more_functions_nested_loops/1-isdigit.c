#include <unistd.h>
#include<ctype.h>
#include "main.h"
/**
 * _isdigit - returns 1 if c is a digit
 * @c: the parameter to be checked
 * Return: 1 if digit but 0 if otherwise
 */

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
