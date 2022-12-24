#include <unistd.h>
#include "main.h"
/**
 * reset_to_98 - resets the address of n to 98
 * @n: parameter to be reset
 */

void reset_to_98(int *n)
{
  int n;
  int *p;
  p = &n;
  *p = 98;
}
