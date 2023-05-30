#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();
	printf("enter first year: ");
	scanf("%d",&i);
	printf("enter second year: ");
	scanf("%d",&n);
		while(i<=n)
		{
			if(i % 4==0)
			{
				printf("%d ",i);
			}
			i++;
		}
	getch();
}