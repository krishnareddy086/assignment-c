#include<stdio.h>
int main(){
	int two_th,five_h,two_h,one_h,amnt;
	printf("enter the value:-");
	scanf("%d",&amnt);
	amnt=amnt-100;
	two_th=amnt/2000;
	amnt=amnt%2000;
	five_h=amnt/500;
	amnt=amnt%500;
	two_h=amnt/200;
	amnt=amnt%200;
	one_h=amnt/100;
	printf("the number of notes required to fullfill the amount is as follow:\n");
	printf("%d 2000 notes\n",two_th);
	printf("%d 500 notes\n",five_h);
	printf("%d 200 notes\n",two_h);
	printf("%d 100 notes\n",one_h+1);
}