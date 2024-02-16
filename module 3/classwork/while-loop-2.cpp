#include<stdio.h>
int main(){
	int n,a=1;
	
	printf("enter the number");
	scanf("%d" ,&n);
	
	while(a<=n){
		if (a%2 ==0){
			printf("even is %d \n",a);
		}else {
			printf("odd is %d \n",a);
		}
		a++;
	}
}
