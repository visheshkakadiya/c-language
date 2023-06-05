#include<stdio.h>
#include<conio.h>

main()
{
	int count=0,n;
	clrscr();
	printf("enter your number: ");
	scanf("%d",&n);

	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("%d",count);
	getch();
}