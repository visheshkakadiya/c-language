#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("enter  no. a: ");
	scanf("%d",&a);

	if(a>=90 && a<=100)
	{
		printf("your grade A1");
	}
	else if(a>=80 && a<=89)
	{
		printf("your grade A2");
	}
	else if(a>=33 && a<=79)
	{
		printf("your grade C1");
	}
	else if(a>=0 && a<=33)
	{
		printf("you are fail");
	}
	else
	{
		printf("invalid no.");
	}
	getch();

}