#include <unistd.h>
#include<ctype.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: integer type to be checked
 * Return: 1 if lowercase 0 if otherwise.
 */

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
