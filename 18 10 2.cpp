/* while purchasing certain items a discount of 10 % is offered if the quantity purchased is more than 1000
if quantity and price are enter through the keyboard write a program to calculate total expencive*/
#include<stdio.h>
int main()
{
	
	float qty,dis, pr,tot;
	printf("enter quantity and price");
	scanf("%f%f",&qty,&pr);
	if(qty>1000)
	{dis=10;
	}
	tot=pr*qty-(pr*qty*dis)/100;
	printf("%f",tot);
}