#include<stdio.h>
int main ()
{int a[100],number,i,j,temp;
printf("\n enter total no. of element");
scanf("%d",&number);
printf("\n enter array element ");
for (i=0;i<number;i++)
scanf("%d",&a[i]);
for(i=0;i<number-1;i++)
for(j=0;j<number-i-1;j++)
if(a[j]>a[j+1])
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
printf("array in ascending order\n");
for(i=0;i<number;i++)
printf("%d\t",a[i]);
printf("\n");

}