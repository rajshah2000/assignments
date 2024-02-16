/* 18
Write a C program to calculate profit and loss on a transaction
*/

#include<stdio.h>
int main(){
	int cp,sp;
	
	printf("enter cost price");
	scanf("%d",&cp);
	printf("enter selling price");
	scanf("%d",&sp);
	
	if(cp<sp){
		printf("profit");
	}else if(cp>sp){
		printf("loss");
	}else{
		printf("no profit no loss");
	}
	
}
