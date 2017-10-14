#include <stdio.h>
int power(int x,int n)
{
  if(n==1)
    return x;
  else
    return x * power(x,n-1);
}
int main(void)
{
    printf("%d\n",power(3,5));
    return 0;
}
