#include <stdio.h>
int power(int x,int n)
{
  if(n==0)
    return 1;
  else if(n % 2 ==0)
  {
    int y = power(x,n/2);
    return y*y;
  }
  else
  {
    int y = power(x,(n-1)/2);
    return x*y*y;
  }
}
int main(void)
{
  printf("%d\n",power(3,5));
  return 0;
}
