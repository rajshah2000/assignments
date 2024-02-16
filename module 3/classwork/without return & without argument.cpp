// without return & without arguement

#include<stdio.h>
void cal_si();
int main(){
	cal_si();
}
void cal_si(){
	float p,r,n,si;
	
	printf("\n enter principle amount:");
	scanf("%f",&p);
	
	printf("\n enter rate of intrest:");
	scanf("%f",&r);
	
	printf("\n enter number of year:");
	scanf("%f",&n);
	
	si=(p*r*n)/100;
	printf("\n simple intrest is :%f",si);
	}
