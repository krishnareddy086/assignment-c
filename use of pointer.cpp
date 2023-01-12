//write a program to study a use of pointer in c programing
#include<stdio.h>
main()
{int i=3,*j,**k;
j=&i;
k=&j;
printf("\n Address of i=%u",&i);
printf("\n Address of i=%u",&j);
printf("\n Address of i=%u",*k);
printf("\n Address of j=%u",&j);
printf("\n Address of j=%u",k);
printf("\n Address of k=%u",&k);
printf("\n value of j=%u",j);
printf("\n value of k=%u",k);
printf("\n value of i=%d",i);
printf("\n value of i=%d",*(&i));
printf("\n value of i=%d",*j);
printf("\n value of i=%d",**k);
}