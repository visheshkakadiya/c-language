#include<stdio.h>
#include<string.h>

struct student
{
	int id;
	char name[20];
	int age;
	char course[30];
	char city[30];
	int standard;
	char school[30];
};

void main()
{
	
	struct student a[3];
	int i;
	
	
	for(i=0;i<3;i++)
	{
		printf("%d/%d\n",i+1,3);
		printf("enter id\t = ");
		scanf("%d",&a[i].id);
		printf("enter name\t = ");
		scanf("%s",&a[i].name);
		printf("enter ege\t = ");
		scanf("%d",&a[i].age);
		printf("enter course\t = ");
		scanf("%s",&a[i].course);
		printf("enter city\t = ");
		scanf("%s",&a[i].city);
		printf("enter standerd\t = ");
		scanf("%d",&a[i].standard);
		printf("enter school\t = ");
		scanf("%s",&a[i].school);
	}
	
	printf("id\tName\tage\tcourse\tcity\tstanderd\tschool\n");
	
	for(i=0;i<3;i++)
	{
		printf("%d\t%s\t%d\t%s\t%s\t%d\%s",a[i].id,a[i].name,a[i].age,a[i].course,a[i].city,a[i].standard,a[i].school);
	}
}

