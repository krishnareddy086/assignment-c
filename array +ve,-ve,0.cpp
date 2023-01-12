//write a program to input a array of 10 numbers and count total no of positive , negative and zero 
//elements and display there count
#include<stdio.h>
#define N 10
int main ()
{int a[N],i,p=0,n=0,z=0;
printf("enter the element ");
for(i=0;i<N;i++)
scanf("%d",&a[i]);
for(i=0;i<N;i++)
{
if(a[i]>0)
p++;
else if (a[i]<0)
n++;
else
z++;}
printf("\npositive number= %d",p);
printf("\nnegative number= %d",n);
printf("\nzero elements= %d",z);
return 0;

}