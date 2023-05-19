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

	c= (a*a*a) + (3*a*a*b) + (3*a*b*b) + (b*b*b);
	printf("(a+b)^3: %d",c);
	getch();
}