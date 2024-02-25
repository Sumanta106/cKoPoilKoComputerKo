#include<stdio.h>
void main()
{
	char str[50];
	printf("enter your name:\n");
	scanf("%[A-Z]",str);
	printf("%s",str);
}
