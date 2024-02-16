/* 34
Accept month number and display month name
*/

#include<stdio.h>
int main(){
	int i;
	printf("enter month number between 1-12");
	scanf("%d",&i);
	
	if(i==1){
		printf("january");
	}else if(i==2){
		printf("february");
	}else if(i==3){
		printf("march");
	}else if(i==4){
		printf("april");
	}else if(i==5){
		printf("may");
	}else if(i==6){
		printf("june");
	}else if(i==7){
		printf("july");
	}else if(i==8){
		printf("august");
	}else if(i==9){
		printf("september");
	}else if(i==10){
		printf("october");
	}else if(i==11){
		printf("november");
	}else if(i==12){
		printf("decmber");
	}else{
		printf("enter valid no.");
	}
}
