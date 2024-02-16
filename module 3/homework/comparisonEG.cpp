#include<stdio.h>
int main(){
	
	float a,b,c;
	
	printf("enter the  a number");
	scanf("%f" ,&a);
	
	printf("enter the  b number");
	scanf("%f" ,&b);
	
	printf("enter the  c number");
	scanf("%f" ,&c);
	
	if(a>b && a>c){
		printf("a is bigger %f" ,a);
	} else if(b>a && b>c){
		printf("b is bigger %f" ,b);
	} else if(c>a && c>b){
		printf("c is bigger %f" ,c);
	} s
	
}
