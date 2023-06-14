#include<stdio.h>
main()
{
	int n,k;
	printf("enter array size: ");
	scanf("%d",&n);
	
	int i,a[n],b[n],c[n];
	printf("enter array element: \n");
	for(i=0; i<n; i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("the square are: ");
	for(i=0; i<n; i++)
	{
		printf("%d,",a[i]*a[i]);
	}
	

}
