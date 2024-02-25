#include<stdio.h>
void main()
{
	int a,b,c=0,d;
	printf("enter a num:\n");
	scanf("%d",&a);
	d=a;
	while(a>0)
	{
		b=a%10;
		a=a/10;
		c=c*10+b;
	}
	if(c==d)
	{
		printf("it is pallindrum");
	}
	else{
		printf("it is not");
	}
}q


