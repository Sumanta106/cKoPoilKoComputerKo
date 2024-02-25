#include<stdio.h>
#include<math.h>
int main()
{
	int a,price,dd,tt;
	printf("enter the price apple \n ");
	scanf("%d",&price);

	printf("how many apple");
	scanf("%d",&a);
	dd= price/12;
	tt= a*dd;
	printf("result %d",tt);


	
}
