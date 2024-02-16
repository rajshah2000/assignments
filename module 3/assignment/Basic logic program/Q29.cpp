/* 29
Convert minutes into seconds and hours
*/

#include<stdio.h>
int main(){
	int min,sec,hrs;
	
	printf("enter min");
	scanf("%d" ,&min);
	
	sec=min*60;
	printf("seconds are %d" ,sec);
	
	hrs=min/60;
	printf("hours are %d" ,hrs);
}
