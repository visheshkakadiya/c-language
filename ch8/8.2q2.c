#include<stdio.h>
main()
{
	int n,k;
	printf("enter first year: ");
	scanf("%d",&n);
	
	int i;
	printf("enter second year: ");
	scanf("%d",&k);
	
	printf("the array is: ");
	
	for(i=n; i<=k; i++)
	{
		if(i%4==0)
		{
			printf("%d,",i);
		}
	}
}
