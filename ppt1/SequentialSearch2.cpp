#include <stdio.h>
int search(int arr[],int i,int j,int value)
{
  if(i>j)
    return -1;
  if(arr[i]==value || arr[j]==value)
    return 1;
  else
    return search(arr,i+1,j-1,value);
}
int main(void)
{
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  printf("%d\n",search(arr,0,9,12));
  return 0;
}
