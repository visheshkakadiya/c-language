#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s,space=0;
	clrscr();

	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(s=0; s<=space; s++)
		{
			printf("  ");
		}
		for(j=i; j>=i; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}