// with return with argument EG

#include<stdio.h>
float cal_si(float x,float y,float z);
int main(){
	
	float p,n,r,si;
	scanf("%f",&p);
	scanf("%f",&n);
	scanf("%f",&r);
	
	si =cal_si(p,r,n);
	printf("%f",si);
	
	
}
float cal_si(float x,float y,float z){
	
	return (x*y*z)/100;
	
}


