// patter EG5

#include<stdio.h>
int main(){
	int i,j,k,n;
	
	for(i=5;i>=1;i--){
		for(j=1;j<=i-1;j++){
			printf("@");
		}
		for(k=1;k<=n-j+1;k++){
			printf(" * ");
		}
		printf("\n");
	}
}
