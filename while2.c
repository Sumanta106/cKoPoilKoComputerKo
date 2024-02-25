#include<stdio.h>
void main()
{
	int a,b,c,sum=0;
	printf("enter any number:\n");
	scanf("%d",&a);
	while(a>0)
	{

		c=a%10;
	a=a/10;
	sum=sum+c;

	}
printf("the sum of digits is%d",sum);
}



