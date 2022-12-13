#include <unistd.h>
#include<ctype.h>
#include "main.h"
/**
 * declaration of function that checks for alphabet characters.
 *
 * Return: 1 if lowercase but 0 if otherwise.
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
