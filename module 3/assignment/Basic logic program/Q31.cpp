/* 31
Convert kilometers into meters
*/

#include<stdio.h>
int main(){
	int kms,m;
	
	printf("enter kilometers");
	scanf("%d" ,&kms);
	
	m=kms*1000;
	printf("meters are %d",m);
}
