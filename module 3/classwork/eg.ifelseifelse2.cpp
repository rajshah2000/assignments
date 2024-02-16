#include<stdio.h>
int main(){
	float per;
	
	printf("enter your percentage");
	scanf("%f" ,&per);
	
	if(per>=80 && per<=100){
		printf("distinction");
	}else if(per>=70 && per<80){
		printf("first class");
	}else if(per>=60 && per<=70){
		printf("second class");
	}else if(per>=35 && per<=60){
		printf("pass class");
	}else{
		printf("fail");
	}
}
