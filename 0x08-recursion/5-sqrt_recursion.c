#include "main.h"
int sqrt_odd(int odd, int n);

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: int to find its square root
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
int sqrt;
if (n < 0)
{
return (-1);
}
else if (n >= 0 && n <= 1)
{
return (n);
}
if (!(n % 2))
{
if ((n / 2) == 2 || (n == 2))
return (2);
sqrt = _sqrt_recursion(n / 2);
if ((n / sqrt) == sqrt)
return (sqrt);
else if (sqrt > 1)
return (sqrt * 2);
return (-1);
}
else
{
return (sqrt_odd(n, (n - 2)));
}
}

/**
 * sqrt_odd - handles odd and prime numbers
 * @odd: odd or prime number to be checked
 * @n: number to be checked
 * Return: square root of n
 */
int sqrt_odd(int odd, int n)
{
if (n < 0)
return (-1);
else if (odd == (n * n))
return (n);
else
return (sqrt_odd(odd, (n -2)));
}
