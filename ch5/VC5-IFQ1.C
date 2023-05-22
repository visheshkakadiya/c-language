#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();

	printf("enter value a: ");
	scanf("%d",&a);

	printf("enter value b: ");
	scanf("%d",&b);

	if(a>b)
	{
		printf("your minimum no.= %d",b);
	}
	else if(a<b)
	{
		printf("your minimum no.= %d",a);
	}
	else
	{
		printf("invalid no");
	}
	getch();

}