/*write a program to print out all armstrong b/w 1 and 1000 */
#include<stdio.h>
int main()
{int n,a,b,c,temp;
printf("enter the armstrong");
scanf("%d",&n);
while (n<=1000)
{
a=n%10;
b=n%100;
b=(b-a)/10;
c=n/100;
if ((a*a*a+b*b*b+c*c*c)==n)
{printf("ARMSTRONG"); break;
}
else
{printf("not a armstrong");break;
}
}}