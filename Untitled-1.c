#include<stdio.h>
int main ()
{
	float s1,s2,s3,s4,s5,tm,per;
	printf("enter the marks s1\n");
	scanf("%f",&s1);
	printf("enter the marks s2\n");
	scanf("%f",&s2);
	printf("enter the marks s3\n");
	scanf("%f",&s3);
	printf("enter the marks s4\n");
	scanf("%f",&s4);
	printf("enter the marks s5\n");
	scanf("%f",&s5);
	
	tm=s1+s2+s3+s4+s5;
	per=tm/5;
	printf("total marks%f\n",tm);
	printf("total percentage%f",per);
}
