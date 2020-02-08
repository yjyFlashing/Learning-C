#include <stdio.h>
#include <stdlib.h>

int main()
 {
  char c=0xFF;
  if(c==-1)
  {
     printf("signed");
  }else if(c==255)
  {
     printf("unsigned");
  }
  else printf("error!");
  system("pause");
  return 0;
 }