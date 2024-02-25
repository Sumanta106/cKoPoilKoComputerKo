#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,days;
	printf("enter num of days \n");
	scanf("%d",&a);
	b=30;
		days=(a/b);
		c=a%30;
		printf("days in months is %d",days);
				printf("remaining days is %d",c);
}
