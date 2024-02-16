/* 12
WAP to find maximum number among 3 numbers using ternary operator
*/

#include<stdio.h>
int main(){
	int n1 = 5, n2 = 10,max;
	
	max= (n1>n2) ? n1:n2;
	
	printf(" largest no. between %d and %d is %d",n1,n2,max);
}
