/* 20
Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.
*/

#include<stdio.h>
int main(){
	float a,b;
	
	printf("enter your monthly salary");
	scanf("%f" ,&a);
	
	b=a*20/100;
	printf(" remaining salary is %f" ,b);
}
