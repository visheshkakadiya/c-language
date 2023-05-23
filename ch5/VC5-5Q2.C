#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	clrscr();
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	printf("enter c: ");
	scanf("%d",&c);
	printf("enter d: ");
	scanf("%d",&d);

	if(a>b)   //true
	{
		if(a>c)
		{
			if(a>d)
				printf("a is maximum");
			else
				printf("d is maximum");
		}
		else
		{
			if(c>d)
				printf("c is maximum");
			else
				printf("d is maximum");
		 }
	}


	else     //false

	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is maximum");
			}
			else
				printf("d is maximum");

		}
		else
		{
			if(c>d)
				printf("c is maximum");
			else
				printf("d is maximum");
		}



	}



	getch();
}