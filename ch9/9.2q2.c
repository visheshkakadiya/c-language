#include<stdio.h>

main()
{
	char i,pass1[20]="123456",mail1[40]="vishesh@9089",pass2[20],mail2[40],cpy1,cpy2;
	
	printf(" enter your e-mail: ");
	gets(mail2);
	
	printf("enter your password: ");
	gets(pass2);
	
	cpy1=strcmp(mail1,mail2);
	cpy2=strcmp(pass1,pass2);
	
	if(cpy1==0 && cpy2==0)
	{
		printf("loginsuccesfully");
	}
	else
	{
		printf("login failed. invalid credential");
	}
	
}
