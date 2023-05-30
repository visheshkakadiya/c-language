#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("enter value: ");
	scanf("%d",&a);

	a % 2==0 ? printf("number is even") : printf("number is odd");
	getch();
}