#include <stdio.h>
int GCD(int a ,int b)
{
  if(a%b ==0)
    return b;
  else
    GCD(b,a%b);
}
int main(void)
{
  printf("%d\n",GCD(176,48));
  return 0;
}
