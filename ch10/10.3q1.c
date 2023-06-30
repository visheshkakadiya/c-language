#include<stdio.h>


int fac(int n)
{
	if(n!=1)
	{
		return n*fac(n-1);
	}
	else
	{
		return 1;
	}
}
void main()
{
	int n,mul;
	
	printf("enter any number: ");
	scanf("%d",&n);
	
	mul=fac(n);
	
	printf("your factorial number:%d ",mul);
	
	fac(n);
}
