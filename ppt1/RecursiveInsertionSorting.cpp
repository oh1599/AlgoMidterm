#include <stdio.h>
void insert(int data[],int size,int value)
{
  if(size==0)
    data[size]=value;
  else
  {
    if(data[size-1]<value)
      data[size]=value;
    else
    {
      data[size]=data[size-1];
      insert(data,size-1,value);
    }
  }
}
void insertionSort(int data[],int size)
{
  if(size==0)
    return;
  else
  {
    insertionSort(data,size-1);
    insert(data,size-1,data[size-1]);
  }
}
int main(void)
{
  int arr[10]={0,1,3,5,6,8,9,2,7,4};
  insertionSort(arr,10);
  for(int i=0;i<10;i++)
    printf("%d ",arr[i]);
  printf("\n");
  return 0;
}
