/* 28
Convert years into days and months
*/

#include<stdio.h>
int main(){
	int years,days,months;
	printf("enter number of years");
	scanf("%d" ,&years);
	
	days=years*365;
	printf("no of days are %d" ,days);
	
	months=12 * years;
	printf("no of months are %d" ,months);
	return 0;
}
