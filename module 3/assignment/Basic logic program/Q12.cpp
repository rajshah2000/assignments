/* 12
. Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?
*/

#include<stdio.h>
int main(){
	
	int a,b;
	
	printf("enter student a");
	scanf("%d" ,&a);
	
	b=5*a;
	printf("total number of apples required %d" ,b);
}
