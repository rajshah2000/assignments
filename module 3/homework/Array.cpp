// array

#include<stdio.h>
int main(){
	float maths[5],science[5],english[5],total[5],percentage[5];
	int roll[5],i;
	
	printf("\nenter five students roll no\n");
	for(i=0;i<5;i++){
		
		scanf("%d",&roll[i]);
	}
	printf("\nenter above five students maths mark\n");
		for(i=0;i<5;i++){
		
		scanf("%f",&maths[i]);
	}
	printf("\nenter above five students science mark\n");
		for(i=0;i<5;i++){
		
		scanf("%f",&science[i]);
	}
	printf("\nenter above five students english mark\n");
		for(i=0;i<5;i++){
		
		scanf("%f",&english[i]);
	}
	
	
	for(i=0;i<5;i++){
			total[i]=maths[i]+science[i]+english[i];
	    printf("\ntotal marks is %f\n",total[i]);
	    percentage[i]=(total[i]/300)*100;
	    printf("\npercentage is %f\n",percentage[i]);
	}
	
}
