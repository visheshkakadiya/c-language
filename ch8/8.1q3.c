#include<stdio.h>
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	
	int a[n],i,b[n];
	printf("enter array a:\n ");
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
    }
    printf("enter array b:\n ");
    for(i=0; i<n; i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&b[i]);
    }
    printf("array c: ");
    for(i=0; i<n; i++)
    {
    	printf("%d,",a[i]+b[i]);
	}
    
}
