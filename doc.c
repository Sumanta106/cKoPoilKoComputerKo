#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,areaA,areaB, totalarea;
	printf("enter first radius a\n");
	scanf("%d",&a);
	printf("enter second radius a\n");
	scanf("%d",&b);
	areaA=(22/7)*a*a;
	areaB=(22/7)*b*b;
        totalarea= areaA-areaB;
	printf("the area OF first circle is %d",areaA);
	printf("the area of second circle %d", areaB);
	printf("the diff is %d",totalarea);
}

