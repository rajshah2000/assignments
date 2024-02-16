/* 35.
Accept the input month number and print number of days in that month.
*/

#include<stdio.h>
int main(){
	int i;
	printf("enter month number between 1-12");
	scanf("%d",&i);
	
	if(i==1){
		printf("31 days");
	}else if(i==2){
		printf("28 days");
	}else if(i==3){
		printf("31 days");
	}else if(i==4){
		printf("30 days");
	}else if(i==5){
		printf("31 days");
	}else if(i==6){
		printf("30 days");
	}else if(i==7){
		printf("31 days");
	}else if(i==8){
		printf("30 days");
	}else if(i==9){
		printf("31 days");
	}else if(i==10){
		printf("30 days");
	}else if(i==11){
		printf("31 days");
	}else if(i==12){
		printf("31 days");
	}else{
		printf("enter valid no.");
	}
}
