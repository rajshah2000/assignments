/* 27
Convert days into months
*/

#include<stdio.h>
int main(){
	int days,months;
	
	printf("enter number of days");
	scanf("%d" ,&days);
	
	months=days/30;
	printf("months are %d" ,months);
}
