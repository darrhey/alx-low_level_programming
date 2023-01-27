#include "main.h"
int sqrt_odd(int odd, int n);

/**
 * is_prime_number - checks for prime number
 * @n: int to be checked
 * Return: 1 if a prime number, 0 if otherwise
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (prime_num(n, (n - 1)));
}

/**
 * prime_num - confirm prime numbers
 * @odd: number to be checked
 * @n: number to check with
 * Return: 1 if prime number 0 if otherwise
 */
int prime_num(int i, int j)
{
if (j == 1)
return (1);
else if (i % j == 0)
return (0);
else if (i % j != 0)
return (prime_num(i, (j - 1)));
return (0);
}
