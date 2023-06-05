#include<stdio.h>
#include<conio.h>

main()
{
	int sum=0,n,fn,ln;
	clrscr();

	printf("enter your number: ");
	scanf("%d",&n);

	fn=n%10;

	while (n>=9)
	{
		n=n/10;
	}
	ln=n;
	sum= fn+ln;
	printf("sum of your first and last number: %d",sum);

	getch();
}