/*given the coordinate x and y of a centre of a circle and its radius write a 
program which will determine wheather a point lies inside the circle on
 the circle and outside the circle*/
 #include <stdio.h>
 int main()
 {
 	int x,y,r;
 	int dis,d;
 	printf("enter the value of x,y and r");
 	scanf("%d%d%d",&x,&y,&r);
 	dis=x*x+y*y;
 	d=r*r;
    if(dis>d)
	printf("outside the circle");
    else 
	if(dis<d||dis==d)	  
	printf("inside the circle");
}