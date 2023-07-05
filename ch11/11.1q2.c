#include<stdio.h>

void main()
{
	int x,y;
	int *a,*b;
	
	
	printf("enter x: ");
	scanf("%d",&x);
	
	printf("enter y: ");
	scanf("%d",&y);
	
	printf("before swapping:\n ");
	printf("x:%d\n",x);
	printf("y:%d\n",y);
	
	a = &x;
	b = &y;
	printf("after swapping:\n ");
	
	*a = x+y;
	*b = x-y;
	*a = x-y;
	
	printf("x:%d\n",*a);
	printf("y:%d\n",*b);
	
}
