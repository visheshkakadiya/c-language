#include<stdio.h>
main()
{
	char name[100],c;
	int count=0,i;
	
	printf("enter any string: ");
	gets(name);
	
	printf("frequency of each letter.\n");
	
	for(c='a'; c<='z'; c++)
	{
		count=0;
		for(i=0; name[i]!=0; i++)
		{
			if(c==name[i])
			{
				count++;
			}
		}
		if(count>0)
			printf("%c => %d\n",c,count);
	}
}

