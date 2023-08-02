#include<stdio.h>

int getint();

void main()
{
	int n,i;

	
	printf("enter the array's size: ");
	
	n=getint();
	
	int a[n];
	int *p[n],*t[n];
	
	for(i=0; i<n; i++)
	{
		p[i]=&a[i];
	}
	printf("enter array elements: \n");

	for(i=0; i<n; i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",p[i]);
	}
	
	printf("reverse array elements:\n ");
	
	for(i=0; i<n; i++)
	{
		t[n-i-1]=&a[i];
	}

	for(i=0; i<n; i++)
	{
		printf("a[%d]: %d\n",i,*t[i]);
	}
	

}
	int getint()
	{
		int x;
		scanf("%d",&x);
		
		return x;
	}
