#include <stdio.h>
int sum(int arr[],int left ,int right)
{

  if(left==right)
    return arr[left];
  else if(left>right)
    return 0;
  else
    return arr[left] + arr[right] +sum(arr,left+1,right-1);
}
int main(void)
{
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  printf("%d\n",sum(arr,0,9));
  return 0;
}
