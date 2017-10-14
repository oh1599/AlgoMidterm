#include <stdio.h>
int sum(int n)
{
  if(n==1)
    return 1;
  else
    return sum(n-1) + n;
}
int main()
{
  sum(300000);//250,000 ~300,000에서 stack overflow 발생
}
