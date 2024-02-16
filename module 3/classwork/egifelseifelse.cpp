#include<stdio.h>
int main(){
	int choice,a,b;
	
	printf("\n enter a:");
	scanf("%d" ,&a);
	
	printf("\n enter b:");
	scanf("%d" ,&b);
	
	printf("\n enter your choice 1/2/3/4:");
	scanf("%d" ,&choice);
	
	if(choice==1){
		printf("%d",a+b);
	}else if(choice==2){
		printf("%d",a-b);
	}else if(choice==3){
		printf("%d",a*b);
	}else if(choice==4){
		printf("%d",a/b);
	}else{
		printf("\n wrong choice");
	}
	printf("\n finished.....");
}
