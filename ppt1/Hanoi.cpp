#include <stdio.h>
void Hanoi(int n,int a,int b,int c)
{
  if(n>0)
  {
    Hanoi(n-1,a,c,b);
    printf("Move disk from %d to %d.\n",a,c);
    Hanoi(n-1,b,a,c);
  }
}
int main(void)
{
  int numDisk=3;
  printf("Number of disks to move : %d\n",numDisk);
  Hanoi(numDisk,1,2,3);
  return 0;
}
