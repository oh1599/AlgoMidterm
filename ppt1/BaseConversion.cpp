#include <stdio.h>
int convert(int n,int base)
{
  char Table[] = "0123456789abcdef";
  if(n>=base)
    convert(n/base,base);
  printf("%c",Table[n%base]);
}
int main(void)
{
  convert(255,16);
  return 0;
}
