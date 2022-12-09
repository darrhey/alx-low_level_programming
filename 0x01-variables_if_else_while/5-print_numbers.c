#include<stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main()
{
  int num;
  num = 0;
  while (num<10){
    putchar(num);
    num +=1;
  }
  putchar('\n');
  return (0);
}
