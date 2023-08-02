#include<stdio.h>
#include<string.h>

struct st
{
	int id;
	char name[20];
	int age;
	char role[10];
	char city[10];
	int expreience;
	char companyname[10];
};

void main()
{
	
	int n;
	printf("enter the value n = ");
	scanf("%d",&n);
	
	struct st a[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("%d/%d\n",i+1,3);
		printf("enter id\t = ");
		scanf("%d",&a[i].id);
		printf("enter name\t = ");
		scanf("%s",&a[i].name);
		printf("enter ege\t = ");
		scanf("%d",&a[i].age);
		printf("enter role\t = ");
		scanf("%s",&a[i].role  );
		printf("enter city\t = ");
		scanf("%s",&a[i].city);
		printf("enter expreience\t = ");
		scanf("%d",&a[i].expreience);
		printf("enter companyname\t = ");
		scanf("%s",&a[i].expreience);
	}
	
	printf("id\tName\tage\trole\tcity\texpreience\tcompanyname\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\t\n",a[i].id,a[i].name,a[i].age,a[i].role,a[i].city,a[i].expreience,a[i].companyname);
	}
}
