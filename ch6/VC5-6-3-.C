#include<stdio.h>
#include<conio.h>
main()
{
	int i,sum=0,n;
	clrscr();
	printf("enter your number: ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		printf("%d",n);
		sum+=n;
	}
	getch();

}