/*
write a program to make simple calculator (to make add, sub
multi, divide and modulo)
*/

#include<stdio.h>
int main(){
	//declaration
	int x,y,z;
	
	printf("enter your first number");
	scanf("%d" ,&x);
	
	printf("enter second number");
	scanf("%d" ,&y);
	
	z=x+y;
	
	printf("sum of %d and %d is %d" ,x,y,z);
	
	/*substraction*/
	z=x-y;
	
	printf("subtraction of %d and %d is %d" ,x,y,z);
	
	/*multipliation*/
	z=x*y;
	
	printf("multiplication of %d is %d is %d" ,x,y,z);
	
	/*modulo*/
	z=x%y;
	
	printf("modulo of %d and %d is %d" ,x,y,z);
	
}
