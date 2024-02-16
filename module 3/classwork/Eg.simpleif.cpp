#include<stdio.h>
int main(){
	int a,b;
	
	printf("\n enter value of a:");
	scanf("%d" ,&a);
	
	printf("\n enter value of b:");
	scanf("%d" ,&b);
	
	if(a==b){
		printf("both are same");
	}
	if(a!=b){
		printf("both are not same");
	}
	printf("\n thank you");
}
