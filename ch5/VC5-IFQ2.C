#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("enter  no. a: ");
	scanf("%d",&a);

	if(a>0)
	{
		printf("positive no.= %d",a);
	}
	else if(a<0)
	{
		printf("negative no.= %d",a);
	}
	else if(a==0)
	{
		printf("neutral no.= %d",a);
	}
	else
	{
		printf("invalid number");
	}
	getch();

}