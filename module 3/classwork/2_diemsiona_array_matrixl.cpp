// 2 dimentional array matrix

#include<stdio.h>
int main(){
	
	int A[3][3]={{2,6,5},{8,9,30,},{7,5,1}},B[2][2],c[3][3],row,col;
	
	B[0][0]=34;
	B[0][1]=89;
	B[1][0]=45;
	B[1][1]=23;
	
	printf("\n eneter c matrix :\n");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			scanf("%d",&c[row][col]);
		}
		
	}
	printf("\n matrix c:\n");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			printf("%d",c[row][col]);
		}
		printf("\n");
	}
	printf("\n matrix A:\n");
	for(row=0;row<2;row++){
		for(col=0;col<2;col++){
			printf("%d",A[row][col]);
		}
		printf("\n");
	}
	printf("\n matrix B:\n");
	for(row=0;row<2;row++){
		for(col=0;col<2;col++){
			printf("%d",B[row][col]);
		}
		printf("\n");
	}
}
