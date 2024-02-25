#include<stdio.h>
void main()
{
	int m1,sum=0,avg,A=0;
	while(A<5)
	{
		printf("enter marks of subject:\n");
		scanf("%d",&m1);
		sum=sum+m1;
		A=A+1;

	}
avg=sum/5;
printf("the sum is %d\n",sum);
printf("the average is %d",avg);
}
