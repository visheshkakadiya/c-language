#include<stdio.h>
main()
{
	int r,c;
	printf("enter array's row size: ");
	scanf("%d",&r);
	
	printf("enter array's column size: ");
	scanf("%d",&c);
	
	int a[r][c],i,j,largest=0;
	printf("enter array's elements:\n ");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);	
		}
	
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(a[i][j]>largest)
			{
				largest=a[i][j];
			}
		}
	}
	printf("the largest element is: %d",largest);
}
