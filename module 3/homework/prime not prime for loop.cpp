// prime & not prime

#include<stdio.h>
int main(){
	int n,i,j=24;
	
	printf("enter no.");
	scanf("%d",&n);
	
	for(i=2;i<n;i++){
		if(n%i==0){
			j=23;
			break;
		}
	}
	if(j==23){
		printf("not prime");
	}
	else{
		printf("prme");
	}
}
