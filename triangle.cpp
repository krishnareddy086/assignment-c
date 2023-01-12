/*write a program to check wheather triangle is valid or not when three 
angle of the triangle are entered through the keyboard */
#include<stdio.h>
int main()
{
	int a,b,c,tri;
	printf("enter the angle a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	tri=a+b+c;
	if(tri==180)
	printf("triangle is valid");
	else
	printf("triangle is not valid");
}