//write a program to calculate sum total and average marks of 5 studentin a exam
 #include <stdio.h>
 int main()
 {int avg,sum,i,marks[5];
 for(i=0;i<=4;i++)
 {printf("enter marks");
 scanf("%d",&marks[i]);
 }
 for(i=0;i<=4;i++)
 {sum=sum+marks[i];
 }
 avg=sum/5;
 printf("%d\n%d\n",sum,avg);
 return 0;
 }