#include<stdio.h>

main()
{
	char str1[20];
	int i;
	
	printf("enter any string: ");
	scanf("%[^\n]",&str1);
	
	for(i=1; i<=20; i++)
	{
		if(i==0)
		{
		
		if(str1[i]>=65 && str1[i]<=90)
		{
			str1[i]+=32;
		}
	}
	/*	else if(i==0 || )
		{
			str1[i]-=32;
		}*/
	}
	printf("togglecase string: %s",str1);

}
