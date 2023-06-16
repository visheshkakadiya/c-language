#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter number of row: ");
	scanf("%d",&r);
	
	printf("enter number of column: ");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	} 
	
	int r,c;
	
	printf("enter number of row: ");
	scanf("%d",&r);
	
	printf("enter number of column: ");
	scanf("%d",&c);
	
	int b[r][c],i,j;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter b[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]+b[i][j]);
		}
		printf("\n");
	} 
	
	
}
