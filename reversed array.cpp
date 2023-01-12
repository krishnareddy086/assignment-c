//write a program to read value in an array and display it in reverse order
#include<stdio.h>
int main()
{int i,n,a[100];
printf("input the element ");
scanf("%d",&n);
printf("input the element in array");
for(i=0;i<n;i++)
{printf("\nelement:%d=",i);
scanf("%d",&a[i]);
}
printf("the value stored in the array in reverse order = ");
for (i=n-1;i>=0;i--)
{printf("%d",a[i]);
}
printf("\n");
return 0;
 }
  