#include <unistd.h>
#include "main.h"
/**
 * declaration of function that checks for alphabet character _isalpha to return 1.
 *
 * Return: 1 if lowercase but 0 if otherwise.
 */

int print_sign(int n)
{
if (n > 0)
{
  return 1;
  _putchar(43);
}
 else if (n == 0)
   {
     return 0;
     _putchar(48);
   }
else
{
  return -1;
  _putchar(45);
}
