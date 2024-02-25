#include<stdio.h>
void main()
{
	int a,b,c,d,n1,n2,n3;
	printf("enter four diff number \n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	n1=a<b?b:a;
	n2=c<d?d:c;
	n3=n1<n2?n2:n1;
	printf("the greatest nmum is %d",n3);
}
