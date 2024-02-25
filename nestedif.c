#include<stdio.h>
void main()
{
	int n,a,b;
	printf("enter your age:\n");
        printf("enter 1 if you are disable:\n");
	printf("enter 2 if you are single women:\n");
	scanf("%d%d%d",&n,&a,&b);
	if(n>=68)
	{
		printf("you are eligible:\n");
	}
             else{
		     printf("you are not eligible:\n");
	     }

	    if(a==1)
	   if(b==2)
	   { printf("you are eligible:\n");
	   } else{
		   printf("you are not eligible:\n");
	   }
}
