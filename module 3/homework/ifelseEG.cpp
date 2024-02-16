#include<stdio.h>
int main(){
	
	int acc;
	float balance,value;
	char choice;
	
	printf("enter your account number:");
	scanf("%d",&acc);
	
	printf("enter your current value number:");
	scanf("%f" ,&balance);
	
	printf("enter value you want withdraw or deposit");
	scanf("%f" ,&value);
	
	printf("enter what you want to withdraw or deposit");
	scanf(" %c" ,&choice);
	
	if(choice=='w'){
		balance=balance-value;
		printf("after withdraw balance:%f" ,balance);
	}
	else{
		balance=balance+value;
		printf("after deposit value:%f" ,balance);
	}
	
}
