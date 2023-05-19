#include<stdio.h>
#include<conio.h>

main()
{
	int c,f;
	clrscr();
	printf("enter temperature c: " );
	scanf("%d",&c);
	f= (c*9/5) + (32);
	printf("f:%d",f);
	getch();
}

