#include<stdio.h>
void main()
{
	int a,b,fac;
	printf("enter a num:\n");
	scanf("%d",&a);
	for(b=1,fac=1;b<=a;b++)
	{
		fac=fac*b;
	}

		printf("%d \n",fac);

}

