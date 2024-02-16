/* Q11
WAP to find number is even or odd using ternary operator
*/

#include<stdio.h>
int main(){
	int n;
	printf("enter integer");
	scanf("%d",&n);
	
	(n % 2==0) ?
	printf("%d even\n" ,n):
	printf("%d odd\n" ,n);
}
