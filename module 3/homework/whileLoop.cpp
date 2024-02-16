//while loop table

#include<stdio.h>
int main(){
	int num,i;
	printf("enter any number to print table:");
	scanf("%d" ,&num);
	
	i=1;
	while(i<=10){
		printf("%d*%d=%d\n" ,num,i,num*i);
		i++;
	}
	
	
}
