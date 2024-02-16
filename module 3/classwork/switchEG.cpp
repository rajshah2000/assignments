#include<stdio.h>
int main(){
	int choice,a,b;
	printf("\n enter a:");
	scanf("%d ,&a");
	
	printf("\n enter b:");
	scanf("%d ,&b");
	
	printf("\n1.add\n2.sub\n3.mul\n4.div");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\n%d" ,a+b);
			break;
		case 2:
			printf("\n%d" ,a-b);
			break;
		case 3:
		    printf("\n%d" ,a*b);
			break;
		case 4:
		    printf("\n%d" ,a%b);
			break;		
	}
}
