#include <stdio.h>
int factorial(int n)
{
  if(n==0)
    return 1;
  else
    return n * factorial(n-1);
}
int main(void)
{
  printf("%d\n",factorial(5));
  return 0;
}
