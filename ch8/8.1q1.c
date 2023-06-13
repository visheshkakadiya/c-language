#include<stdio.h>
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	
	int a[n],i,count=0;
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
		count++;
	}
		printf("length of an array: %d",count);
}
