#include <stdio.h>

void arrinput(int a[],int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
int arrsum(int a[], int n)
	{
		int i,sum=0;
		for(i=0; i<n; i++)
		{
			sum+=a[i];	
		}
	}
		return sum;
	
}
	
	int main()
	{
		int n,sum,a[n],i;
		printf("enter n: ");
		scanf("%d",&n);
		arrinput(a,n);
		sum = arrsum(a,n);
		printf("sum : %d",sum);
	}



