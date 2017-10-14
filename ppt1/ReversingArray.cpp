#include <stdio.h>
#include <algorithm>
int reverse(int arr[],int i ,int j)
{
  if(i<j)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    reverse(arr,i+1,j-1);
  }
}
int main(void)
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    reverse(arr,0,9);
    for(int i=0;i<10;i++)
    {
      printf("%d ",arr[i]);
    }
    printf("\n");
}
