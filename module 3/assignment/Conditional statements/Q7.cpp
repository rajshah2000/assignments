/* 7
Accept marks from user and check pass or fail
*/

#include<stdio.h>
int main(){
	int per;
	
	printf("enter the marks");
	scanf("%d",&per);
	
	if(per>=50){
		printf("pass");
	} else {
		printf("fail");
	}
}
