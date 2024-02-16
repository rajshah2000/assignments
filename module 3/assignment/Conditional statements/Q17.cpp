/* 17
Write a C program to check whether a triangle can be formed with the given values for the angles
*/

#include<stdio.h>
int main(){
	int a,b,c,sum;
	
	printf("enter value a");
	scanf("%d",&a);
	printf("enter value b");
	scanf("%d",&b);
	printf("enter value c");
	scanf("%d",&c);
	
	sum=a+b+c;	
	
	if(sum==180){
		printf("traingle is valid \n");
	}else{
		printf("not valid");
	}
	
}
