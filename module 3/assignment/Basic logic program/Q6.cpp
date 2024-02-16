/* 6
Find area of Triangle Formula : A = 1/2 × b × h
*/

#include<stdio.h>
int main(){
	float b,h,area;
	
	printf("enter the value of base:");
	scanf("%f", &b);
	
	printf("enter the value of height:");
	scanf("%f", &h);
	
	area=0.5*b*h;
	printf("area of tiangle %f",area);
}
