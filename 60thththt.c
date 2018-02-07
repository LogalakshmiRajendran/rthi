#include<stdio.h>
int main()
{
int n,i,f=0,s=1,g;
printf("enter the number:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{

g=f+s;
f=s;
s=g;

printf("%d",g);
}
return 0;
}
