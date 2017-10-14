#include <stdio.h>
#include <cstring>
int palindrome(char str[],int i,int j)
{
  if(i>=j)
    return 1;
  if(str[i]!=str[j])
    return -1;
  else
    palindrome(str,i+1,j-1);
}
int main(void)
{
  char str[] ="malayalam";
  printf("%d\n",palindrome(str,0,strlen(str)-1));
  return 0;
}
