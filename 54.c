#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("\n enter a number");
scanf("%d",n);
if(n%2==0)
{
printf("even:%d",n);
}
else
{
printf("less_even:%d",n-1);
}
}
