#include<stdio.h>
main()
{
	int r,c;
	printf("enter array's row size: ");
	scanf("%d",&r);
	
	printf("enter array's column size: ");
	scanf("%d",&c);
	
	int a[r][c],i,j,row,col,sum=0;
	printf("enter array's elements:\n ");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);	
		}
	
	}
	
	printf("Enter Row Number :- ");
	scanf("%d",&row);
	
	printf("elements of Row: ");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(i==row)
			{
				printf("%d,",a[i][j]);
				sum += a[i][j];
			}
		}
    }
    printf("\nyour row sum: %d\n",sum);
    
    printf("Enter Column Number :- ");
	scanf("%d",&col);
	printf("elements of column: ");
    for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(j==col)
			{
				printf("%d,",a[i][j]);
				sum += a[i][j];
			}
		}
    }
    	printf("\nyour column sum: %d\n",sum);
}
