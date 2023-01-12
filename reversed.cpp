
/*write a program to find its reverse of a no. and find out its a
 palindrome or not*/
 #include<stdio.h>
 int main()
 {
 	int n,r,sum=0,temp;
 	printf("enter the number");
 	scanf("%d",&n);
 	temp=n;
 	while (n>0)
 	{r=n%10;
	 sum=sum*10+r;
	 n=n/10;	
	  }
	 printf("reversed=%d\n",sum);
	 
	 if(temp==sum)
	 {printf("palindrome");
	 }
	 else
	 {printf("not a palindrome");
	 }
	 
 }
 