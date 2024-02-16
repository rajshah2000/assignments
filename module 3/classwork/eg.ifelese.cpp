#include<stdio.h>
int main(){
	int n;
	
	printf("enter your nuber\n" ,&n);
	scanf("%d", &n);
	
	if(n %2==0){
		printf("%d number is even.\n", n);
	}else{
		printf("%d number is odd.\n", n);
	}
}
