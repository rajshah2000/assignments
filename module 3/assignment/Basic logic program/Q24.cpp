/* 24
Accept 5 employees name and salary and count average and total salary
*/

#include<stdio.h>
int main(){
	
	char a,b,c,d,e;
	int a1,a2,a3,a4,a5,avg,total;
	
	printf("enter name 1");
	scanf(" %c",&a);
	printf("enter name 2");
	scanf(" %c",&b);
	printf("enter name 3");
	scanf(" %c",&c);
	printf("enter name 4");
	scanf(" %c",&d);
	printf("enter name 5");
	scanf(" %c",&e);
	
	printf("enter salary 1");
	scanf("%d" ,&a1);
	printf("enter salary 2");
	scanf("%d" ,&a2);
	printf("enter name 3");
	scanf("%d" ,&a3);
	printf("enter name 4");
	scanf("%d" ,&a4);
	printf("enter name 5");
	scanf("%d" ,&a5);
	
	total=a1+a2+a3+a4+a5;
	printf("total salary is %d",total);
	
	avg=total/5;
	printf("average salary is %d",avg);
}
