#include<stdio.h>
int sum(int a , int b)
{
	return a+b ;
}
int sub(int a , int b)
{
	return a-b ;
}
int mul(int a , int b)
{
	return a*b ;
}
int div(int a , int b)
{
	return a/b ;
}
int mod(int a , int b)
{
	return a%b ;
}
int first()
{
	int a ;
	printf("enter first number : ");
	scanf("%d",&a);
	
	return a ;
}
int second()
{
	int b ;
	printf("enetr second number : ");
	scanf("%d",&b);
	
	return b ;
}
void main()
{
	int choice,a ,b ;
	do
	{	
		printf("press 1 for +\n");
		printf("press 2 for -\n");
		printf("press 3 for *\n");
		printf("press 4 for /\n");
		printf("press 5 for%\n");
		printf("press 6 for exit");
		printf("\nenter your choice");
		scanf("%d",&choice) ;
		
		switch(choice)
		{
			case 1 :
				a=first();
				b=second();
				sum(a,b);
				printf("\nsum :%d",sum(a,b));
				break;
			case 2:
				a=first();
				b=second();
				sub(a,b);
				printf("\nsub :%d",sub(a,b));
				break;
			case 3 :
				a=first();
				b=second();
				mul(a,b);
				printf("\nmul :%d",mul(a,b));
				break;
			case 4 :
				a=first();
				b=second();
				div(a,b);
				printf("\ndiv %d",div(a,b));
				break;
			case 5 :
				a=first();
				b=second();
				mod(a,b);
				printf("\nmod :%d",mod(a,b));
				break;
			case 6 :
				break;	
			default :
				printf("\n");
				main();				
		}
	}while(choice != 6 );
}
