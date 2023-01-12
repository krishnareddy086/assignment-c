#include<stdio.h>
int main ()
{int a=19,b,c,d,e,f,g,u;
b=a++ ;
c=a&&b ;
d=a||b;
e=a^b;
f=a|b;
g=++f;
u%=a;
g+=d;

printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",e);
printf("%d\n",f);
printf("%d\n",g);
printf("%d\n",u);
printf("%d\n",g);


}