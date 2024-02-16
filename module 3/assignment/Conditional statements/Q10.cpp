/* 10
WAP to check whether a number is negative, positive or zero.
*/

#include<stdio.h>
int main(){
	int n;
	
	printf("enter your nuber\n" ,&n);
	scanf("%d", &n);
	
	if(n<0){
		printf("negative");
	}else if(n>0){
		printf("positive");
	}else{
		printf("zero");
	}
}
