#include<stdio.h>
int main()
{
int n,i,f=0,s=1,l;
printf("enter the number:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{

l=f+s;
f=s;
s=l;

printf("%d",l);
}
return 0;
}
