#include<stdio.h>
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	
	int a[n],i;
	float sum=0.0;
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
		sum+=a[i];
    }
    for(i=0; i<n; i++)
    {
    	printf("a[%d]: %d\n",i,a[i]);
	}
		printf("sum: %f", sum/n);
}
