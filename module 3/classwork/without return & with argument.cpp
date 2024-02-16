//without return with argument

#include<stdio.h>
void cal_si(float x,float y,float z);
int main(){
	float x,y,z;
	
	printf("\n enter principle amount");
	scanf("%f",&x);
	
	printf("\n enter rate of intrest");
	scanf("%f",&y);
	
	printf("\n enter nuber of year");
	scanf("%f",&z);
	
	cal_si(x,y,z);
	
}
void cal_si(float x,float y,float z){
	float SI;
	SI=(x*y*z)/100;
	printf("\ simple intrest is :%f",SI);
}
