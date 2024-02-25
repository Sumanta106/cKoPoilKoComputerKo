#include<stdio.h>
#include<math.h>
void main()
{
	int n,d1,d2,d3,d4,d5,sum;
	printf("enter five digits positive integer"\n);
	scanf("d",&n);
	d1=n%10;
	n=n/10;
	d2=n%10;
	n=n/10;
	d3=n%10;
	n=n/10;
	d4=n%10;
	n=n/10;
	d5=n%10;
	sum=d1+d2+d3+d4+d5;
	printf("the sum of 5 digits positive integer is d%",sum);
}
