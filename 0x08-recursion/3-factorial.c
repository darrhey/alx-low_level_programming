#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: the factorial number
 * Return: -1 if (n<0)
 */

int factorial(int n)
{
if ((n <= 1) && (n > 0))
{
return (1);
}
return (factorial(n) * factorial(n-1));
}
}
