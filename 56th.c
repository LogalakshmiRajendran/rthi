#include "stdio.h"
int main() {
char b[100];
int i;
scanf("%s",&b);
for(i=0;b[i]!='\0';i++)
{
  if(b[i]>='a'||b[i]<='z'||b[i]>='A'||b[i]<='Z'&&b[i]>=0||b[i]<=9)
  {
    printf("yes");
    break;
  }
}
}
