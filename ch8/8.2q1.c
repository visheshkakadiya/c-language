#include<stdio.h>
main()
{
	int n,k;
	printf("enter array a size: ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i;
	
	printf("enter array a's element: \n");
	for(i=0; i<n; i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	printf("enter array b size: ");
	scanf("%d",&k);
	
	printf("enter array b's element: \n",k);
	for(i=0; i<k; i++)
	{
		printf("b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	printf("array c: ");
	for(i=0; i<n+k;  i++)
	{
		if(i<n)
		{
			c[i] = a[i];
		}
		else
		{
			c[i] = b[i-n];
		}
		printf("%d,",c[i]);
	}
	
}
