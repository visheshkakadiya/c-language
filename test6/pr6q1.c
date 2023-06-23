#include<stdio.h>
main()
{
	char name[20],rev[20];
	int i,j,com=0;
	
	printf("enter any string: ");
	gets(name);
	
	strcpy(rev,name);
	
	strrev(rev);
	
	com = strcmp(rev,name);
	
	if(com==0)
	{
		printf("given string is a palidrome..");
	}
	else
	{
		printf("give name is not a palindrome..");
	}
}
