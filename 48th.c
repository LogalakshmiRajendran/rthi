#include<stdio.h>
int main()
{
	int n,a[100],i,s=0;
	float av;
	printf("Enter the total number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	av=s/n;
	printf("The average value is %.2f",av);
	return 0;
	
}
