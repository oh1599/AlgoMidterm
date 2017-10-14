#include <stdio.h>
int countUp(int n)
{
  if(n>0)
    countUp(n-1);
  printf("%d ",n);
}
int main(void)
{
  countUp(4);
  return 0;
}
