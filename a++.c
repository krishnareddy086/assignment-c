#include<stdio.h>
int main(){
	int a=10,b,c,d,e;
	a=a++;
	b=++a;
	c=b++;
	d=++b;
	e=c++;
	
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
}