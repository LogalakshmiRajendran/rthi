#include <stdio.h>
#include<math.h>
int main()
{
int a,i;
printf("\nEnter a number");
scanf("%d",&a);
for(i=0;i<a;i++)
{
if((pow(2,i))==a)
{
printf("yes");
}
}
printf("no");
return 0;
}
