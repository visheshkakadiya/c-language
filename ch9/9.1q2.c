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
	}
	printf("lowercase string: %s",str1);
}
