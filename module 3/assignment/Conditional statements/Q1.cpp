/* 1
. Write a C program to accept two integers and check whether they are equal
or no
*/

#include<stdio.h>
int main(){
	int a,b;
	printf("enter value a");
	scanf("%d",&a);
	
	printf("enter value b");
	scanf("%d",&b);
	
	if(a==b){
		printf("equal");
		
	} else {
		printf("not equal");
	}
}

