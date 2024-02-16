// pattern example 3

#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter any no.");
	scanf("%d" ,&n);
	
		for(i=1;i<=5;i++){
			for(j=1;j<=i;j++){
				printf("%d",j);
			}
		printf("\n");
	}

}
