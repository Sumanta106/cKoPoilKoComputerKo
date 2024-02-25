#include <stdio.h>
#include<math.h>
void main()
{
	int d1,d2,d3,d4,d5,d6,n;
	printf("enter a 6 digit integer \n");
	scanf("%d",&n);
	d1=n%10;
	n=n/10;
	d2=n%10;
	n=n/10;
	d3=n%10;
	n=n/10;
	d4=n%10;
	n=n/10;
	d5=n%10;
	n=n/10;
	d6=n%10;
	printf("the reverse is %d %d %d %d %d %d",d1,d2,d3,d4,d5,d6);
}


