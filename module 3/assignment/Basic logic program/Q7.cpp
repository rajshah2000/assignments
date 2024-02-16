/* 7
Find area of Rectangle Formula : A=wl
*/

#include<stdio.h>
int main(){
	float w,l,area;
	
	printf("enter value of width:");
	scanf("%d" ,&w);
	
	printf("enter value of length:");
	scanf("%d",&l);
	
	area=w*l;
	printf("area of rectangle is %f" ,area);
}
