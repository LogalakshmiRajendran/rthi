#include <stdio.h>
int main()
{
    int a[10],b,i;
    printf("enter the numbers");
    for(i=0;i<=10;i++)
    scanf("%d",&a[i]);
     b=a[0];
      for(i=1;i<=10;i++)
    {
        if(a[i]>b)
        b=a[i];
    }
    printf("%d",b);
    return 0;
