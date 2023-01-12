//write a program to find largest element in an array
#include<stdio.h>
int main()
{int size,i,largest;
 printf("enter size of array");
 scanf("%d",&size);
 int array[size];
 printf("enter %d elements of array");
 for(i=0;i<size;i++)
 {scanf("%d",&array[i]);
 }
 largest=array[0];
 for(i=1;i<size;i++)
 {if (largest<array[i])
 {largest=array[i];
 }
 }printf("largest element is %d",largest);
 return 0;
}