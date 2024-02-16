/* 19
Calculate compound interest
*/

#include<stdio.h>
int main(){
	
	float principle,rate,time,n,amount;
	
	printf("enter the principle amount:");
	scanf("%f" ,&principle);
	
	printf("enter the rate:");
	scanf("%f" ,&rate);
	
	printf("enter time duration:");
	scanf("%f" ,&time);
	
	printf("enter number of times that intrest is compounded annually:");
	scanf("%f" ,&n);
	
	amount= principle*(1+rate/n)*time;
	
	
	printf(" the compound intrest is %.2f",amount);
}
