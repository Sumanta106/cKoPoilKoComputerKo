#include<stdio.h>
void main()
{
	int a,sum,b;
	for(a=1,sum=0;a<=20;a++)
	{
		b=a%2;
		if(b==0)
		{
	sum=sum+a;
	printf("%d \n",sum);
		}
	}

}
