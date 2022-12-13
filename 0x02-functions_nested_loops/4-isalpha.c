#include <unistd.h>
#include<ctype.h>
#include "main.h"
/**
 * declaration of function that checks for alphabet character _isalpha to return 1.
 *
 * Return: 1 if lowercase but 0 if otherwise.
 */

int _isalpha(int c)
{
if (isalpha(c) == 1)
{
return 1;
}
else
{
return 0;
}
