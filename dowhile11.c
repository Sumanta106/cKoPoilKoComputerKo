#include<stdio.h>
void main()
{
	long double a,b,fac;
	printf("enter a num:\n");
		scanf("%Lf",&a);
	for(b=1,fac=1;b<=a;b++)
	{
		fac=fac*b;
	}
	printf("%Lf \n",fac);
}


