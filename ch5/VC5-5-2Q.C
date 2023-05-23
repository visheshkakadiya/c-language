#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	printf("enter c: ");
	scanf("%d",&c);

	if(a==b && b==c && c==a)
	{
		printf("all are same");
	}
	else if(a==b)
		{
			if(a<c)
				printf("a and b are minimum");
			else
				printf("c is minimum");
		}
	else if(b==c)
		{
			if(a>c)
				printf("b and c are minimum");
			else
				printf("a is minimum");
		}
	else if(a==c)
		{
			if(b>a)
				printf("a and c are minimum");
			else
				printf("b is minimum");
		}
	else if(a>b)   //true
	{
		if(a>c)
			printf("c is minimum");
		else
			printf("a is minimum");
	}

	else     //false

	{
		if(b>c)
			printf("c is minimum");
		else
			printf("b is minimum");

	}


	getch();
}