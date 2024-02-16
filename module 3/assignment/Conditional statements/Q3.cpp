/* 3
WAP to check if the given year is a leap year or not
*/

#include<stdio.h>
int main(){
	int y;
	
	printf("enter any year");
	scanf("%d",&y);
	
	if(y%4==0){
		printf("the year is leap year");
	}
	else {
		printf("the year is no leap year");
	}
}
