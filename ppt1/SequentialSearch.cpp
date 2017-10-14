#include <stdio.h>
int search(int arr[],int n,int value)
{
  if(n==0)
    return -1;
  if(arr[n-1]==value)
    return 1;
  else
  {
    search(arr,n-1,value);
  }
}
int main(void)
{
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  printf("%d\n",search(arr,10,11));
  return 0;
}
