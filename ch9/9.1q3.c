#include<stdio.h>

main()
{
	char str1[20];
	int i;
	
	printf("enter any string: ");
	scanf("%[^\n]",&str1);
	
	for(i=0; i<=20; i++)
	{
		if(str1[i]>=65 && str1[i]<=90)
		{
			str1[i]+=32;
		}
		else if(str1[i]>=97 && str1[i]<=122)
		{
			str1[i]-=32;
		}
	}
	printf("togglecase string: %s",str1);
}
