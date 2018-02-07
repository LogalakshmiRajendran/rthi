#include <stdio.h>

void main()
{
    int a,b,l;
    scanf("%d%d",&a,&b);
    l=a;
    a=b;
    b=l;
    printf("%d %d",a,b);

}
