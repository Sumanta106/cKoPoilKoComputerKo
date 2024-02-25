#include<stdio.h>
void main()
	{
		float a,sum,n;
		printf("enter a num:\n");
		scanf("%f",&n);
		for(a=1;a<=n;a++)
		{
			sum=sum+1/a;
		}
		printf("%f \n",sum);
	}
