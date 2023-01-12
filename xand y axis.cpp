/* given a point x,y write a program to find out if it lies on x axis 
or y axis or on the origin*/
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the coordinate x and y");
	scanf("%d%d",&x,&y);
	if(x==0&&y==0)
	printf("origin");
	else
	if (x!=0&&y==0)
	printf("on x-axis");
	else if(x==0&&y!=0)
	printf("on y-axis");
	
}