#include<stdio.h>
void main()
{
	int a=0,b=1,num;
                  printf("%d",a);
		  printf("%d",b);
		  do{
			  num=a+b;
			  printf("%d",num);
			  a=b;
			  b=num;
		  }
		  while(num<15);
}
