/*write a program to enter a number less than 10 through the keyboard
 and print hello c and print hello programming if the no. is greater than 10.*/
 #include<stdio.h>
 int main()
 {
 	int num;
 	printf("enter the value");
 	scanf("%d",&num);
 	if(num<10)
 	{printf("Hello world");
	 }
	 else
	 {printf("Hello programming");
	 }
 }