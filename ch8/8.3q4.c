#include<stdio.h>
main()
{
	int r,c;
	printf("enter array's row: ");
	scanf("%d",&r);
	
	printf("enter array's column: ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("output:\n ");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(i==0 || i==r-1 || j==0 || j==c-1)
			{
				printf("%d",a[i][j]);
				sum+=a[i][j];	
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\nthe sum of boundary element of an array:%d ",sum);
	
}
