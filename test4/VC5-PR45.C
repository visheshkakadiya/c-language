#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s,space=0;
	clrscr();

		for(i=1; i<=5; i++)
		{
			for(j=1; j<=i; j++)
			{
				printf("%d", j);
			}
			printf("\n");
		}
		for(s=8; s>=space; s--)
		{
			printf("  ");
		}
		space++;

		for(i=1; i<=5; i++)
		{
			for(j=i; j>=1; j--)
			{
				printf("%d", j);
			}
			printf("\n");
		}
	getch();
}