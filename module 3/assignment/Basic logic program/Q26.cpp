/* 26
Convert temperature Fahrenheit to Celsius
*/

#include<stdio.h>
int main(){
	
	float fahrenheit,celsius;
	
	printf("enter temp in fahrenheit:");
	scanf("%f" ,&fahrenheit);
	
	celsius=(fahrenheit-32)*5/9;
	printf("celsius is %f" ,celsius);
}
