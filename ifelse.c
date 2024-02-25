#include<stdio.h>
void main()
{
	int n,r;
	printf("enter a number:\n");
	scanf("%d",&n);
	r=n%5;
	if(r=0)
	{
		printf("it is multiple of 5");
	}else{
		printf("it is not multiple of 5");
	}
}
