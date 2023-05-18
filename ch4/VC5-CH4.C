#include<stdio.h>
#include<conio.h>

main()
{       int a,b,c;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	c=(a*a) + (2*a*b) + (b*b);

	printf("(a+b)^2:%d",c);
	getch();
}