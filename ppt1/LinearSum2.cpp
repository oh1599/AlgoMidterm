#include <stdio.h>
int sum(int arr[] , int n)
{
  if(n==1)
    return arr[0];
  else
    return arr[n-1] + sum(arr,n-1);
}
int main(void)
{
  int arr[10]= {1,2,3,4,5,6,7,8,9,10};
  printf("%d\n",sum(arr,10));
  return 0;
}
