/* 32
Accept 2 numbers and find out its sum check it size
*/

#include<stdio.h>
int main(){
	
	int a,b,sum;
	printf("enter number 1");
	scanf("%d",&a);
	
	printf("enter number 2");
	scanf("%d",&b);
	
	sum=a+b;
	printf("sum is %d",sizeof(sum));
	
}
