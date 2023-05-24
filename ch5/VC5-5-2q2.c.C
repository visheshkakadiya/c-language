#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e;
	clrscr();
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	printf("enter c: ");
	scanf("%d",&c);
	printf("enter d: ");
	scanf("%d",&d);
	printf("enter e: ");
	scanf("%d",&e);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
					printf("a is maximum");
				else
					printf("e is maximum");
			}
			else
			{
				if(d>e)
					printf("d is maximum");
				else
					printf("e is maximmum");
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
					printf("c is maximum");
				else
					printf("e is maximum");
			}
			else
			{
				if(d>e)
					printf("d is maximum");
				else
					printf("e is maximum");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
					printf("b is maximum");
				else
					printf("e is maximum");
			}
			else
			{
				if(d>e)
					printf("d is maximum");
				else
					printf("e is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
					printf("c is maximum");
				else
					printf("e is maximum");
			}
			else
			{
				if(d>e)
					printf("d is maximum");
				else
					printf("e is maximum");
			}
		}
	}


	getch();
}