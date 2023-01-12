/*it ages of three children are entered through the keyboard whrite a 
program to calculate oldest of the three*/ 
#include<stdio.h>
int main ()
{ int c1,c2,c3 ;
printf("enter the age of the children");
scanf("%d%d%d",&c1,&c2,&c3);
if(c1>c2&&c1>c3)
printf("child 1 is older");
else
if(c2>c1&&c2>c3)
printf("child 2 is older");
else
if(c3>c1&&c3>c2)
printf("child 3 is older");
}