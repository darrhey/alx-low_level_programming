#include <unistd.h>
#include<ctype.h>
#include "main.h"
/**
 * declaration of function _islower.
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
