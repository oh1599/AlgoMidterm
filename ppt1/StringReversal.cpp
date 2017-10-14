#include <stdio.h>
void printReverse(char str[],int n)
{
  if(str[n] != 0)
  {
    printReverse(str,n+1);
    printf("%c",str[n]);
  }
}
int main(void)
{
  char str[]= "hello-world!";
  printReverse(str,0);
  return 0;
}
