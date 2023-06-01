#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,factorial=1;
	clrscr();
	printf("enter your number: ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		factorial*=i;

	}
		printf("%d",factorial);
	getch();

}