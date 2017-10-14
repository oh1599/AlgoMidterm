#include <stdio.h>
int countDown(int n)
{
  printf("%d ",n);
  if(n>0)
    countDown(n-1);
}
int main(void)
{
  countDown(4);
}
