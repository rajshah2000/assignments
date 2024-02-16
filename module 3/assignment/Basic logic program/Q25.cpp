/* 25
Accept 5 expense from user and find average of expense
*/

#include<stdio.h>
int main(){
	int a,b,c,d,e,avg,total;
	
	printf("enter expense a");
	scanf("%d",&a);
	printf("enter expense b");
	scanf("%d",&b);
	printf("enter expense c");
	scanf("%d",&c);
	printf("enter expense d");
	scanf("%d",&d);
	printf("enter expense e"); 
	scanf("%d",&e);
	
	total=a+b+c+d+e;
	
	avg=total/5;
	printf("average expense is %d" ,avg);
	
	return 0;
}
