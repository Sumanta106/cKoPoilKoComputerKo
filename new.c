#include <stdio.h>
#include <math.h>
void main()
{
	int a,b,c,sp,area;
	printf("enter the first side \n");
	scanf("%d",&a);
	printf("enter second side \n");
	scanf("%d",&b);
	printf("enter third side \n");
	scanf("%d",&c);
	sp=(a+b+c)/2;
	area=sqrt(sp*(sp+(sp-a)*(sp-b)*(sp-c)));
        printf("the area of triangle is %d",area);
			}
