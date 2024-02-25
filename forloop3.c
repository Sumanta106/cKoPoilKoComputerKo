#include<stdio.h>
void main()
{
	int a,n,b,sum;
	printf("enter a num:\n");
	scanf("%d",&n);
	for(a=1,sum=0;a<=n;a++)
	{
		b=a%5;
	if(b==0)
	{	
		sum=sum+a;
	}
	}

	printf("sum is %d",sum);
}

