// ARRAY odd even

#include<stdio.h>
int main(){
	int n[10],i;
	
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<10;i++)
	{
	
		if(n[i]%2==0){
			printf("%d even",n[i]);
		}else{
			printf("%d odd",n[i]);
		}
	}
}

	
	
	

		
	

