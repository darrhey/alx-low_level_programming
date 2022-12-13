#include <unistd.h>
#include "main.h"
/**
 * declaration of function _islower.
 *
 * Return: 1 if lowercase but 0 if otherwise.
 */

int _islower(int c)
{
if (islower(c) == 1)
{
return 1;
}
else
{
return 0;
}
