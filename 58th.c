#include <stdio.h>
void main
{
int m,n;
printf("\n enter 2 numbers");
scanf("%d %d",&m,&n);
printf(" numbers before swapping %d %d\n",m,n);
m=m^n;
n=m^n;
m=m^n;
printf(" the swapped numbers are %d %d\n",m,n);
}
