#include<stdio.h>
void main()
{
int a[10],i,j,n,b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
b=a[i];
a[i]=a[j];
a[j]=b;
}
}
printf("%d",a[0]);
printf("%d",a[n]);
}
