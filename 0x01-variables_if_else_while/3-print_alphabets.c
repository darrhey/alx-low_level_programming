#include<stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
  char a;
  for (a='a';a<='z';a++){
    putchar(a);
  }
  for (a='A';a<='Z';a++){
    putchar(a);
  }
  putchar('\n');
  return (0);
}
