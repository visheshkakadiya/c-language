#include<stdio.h>

void main()
{
	int n;
	
	printf("enter the array's size: ");
	scanf("%d",&n);
	
	int a[n],i,square;
	int *ptr;
	
	printf("enter array's elements: \n");
	
	ptr=a;
	
	for(i=0; i<n; i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",ptr+i);
	}
	
	for(i=0; i<n; i++)
	{
		printf(" %d,\n",*(ptr+i)* *(ptr+i));
	
	}
}
