#include<stdio.h>
int main()
{
	int a,b,sum=0,sub=0,mul=0,div=0;
	printf("enter the value a and b");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("%d",sum);
printf("%d",sub);
printf("%d",mul);
printf("%d",div);
}