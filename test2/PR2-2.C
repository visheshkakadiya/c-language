#include<stdio.h>
#include<conio.h>
main()
{
	int choice,units;
	float Rs,bill,surcharge;
	clrscr();
	printf("1) for the first 50 units Rs. 0.50/unit\n");
	printf("2) for the next 100 units Rs. 0.75/unit\n");
	printf("3) for the next 200 units Rs. 1.20/unit\n");
	printf("4) for units above 250 Rs. 1.50/unit\n");
	printf("an additional surcharge of 20% is added to the bill");
	printf("enter your choice: ");
	scanf("%d",&choice);

		switch (choice)
		{
			case 1:
				printf("your units is under 50\n");
				printf("enter your units: ");
				scanf("%d",&units);
				Rs = 0.50;
				break;
			case 2:
				printf("your units is under 100\n");
				printf("enter your units: ");
				scanf("%d",&units);
				Rs = 0.75;
				break;
			case 3:
				printf("your units is under 200\n");
				printf("enter your units: ");
				scanf("%d",&units);
				Rs = 1.20;
				break;
			case 4:
				printf("your units is above 250\n");
				printf("enter your units: ");
				scanf("%d",&units);
				Rs = 1.50;
				break;
			default:
				printf("invalid!!\n");
		}

		bill = units*Rs;
		surcharge = bill*20/100;

		printf("electricity bill: %.2f", bill+surcharge);
	getch();
}