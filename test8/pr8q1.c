#include<stdio.h>
#include<string.h>

void main()
{
	char a[20];
	int *p;
	int b=0;
	
	printf("enter the eny stringv = ");
	scanf("%[^\n]",&a);
	
	b=strlen(a);
	p=&b;
	printf("string lenght = %d",*p);
}
