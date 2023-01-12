/*write a program to print fibomacci numbers upto a given term*/
//write  a program to print multiplication table of a number entered by the user
//table must be in formed 7*1=7,7*2=14,7*3=21----7*10=70
#include<stdio.h>
int main()
{int t1=0,t2=1,nt=0,n;
printf("enter a positive number");
scanf("%d",&n);
while(nt<=n)
{printf("%d\n",nt);
t1=t2;
t2=nt;
nt=t1+t2;
}return 0;}