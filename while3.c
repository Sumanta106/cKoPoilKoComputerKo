#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d=0;
	printf("enter a number:\n");
	scanf("%d",&a);
	d=a;
	while(b>0)
	{
		b=a%10;
		c=pow(b,3);
		d=d+c;
	}
	if(d==a)
	{
printf("the num is armstrong");
}
	else{
		printf("the num is not armstrong");
	}
}

