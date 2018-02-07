#include<stdio.h>
void main()
{
  int a,b,ans;
  printf("enter the numbers");
  scanf("%d%d",&a,&b);
  ans=a*b;
  if(ans%2==0)
  {
    printf("even");
  }
  else
  {
    printf("odd");
  }
}
