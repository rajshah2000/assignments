/* find area of triangle,circle,sqaure,rectangle.
according to user's choice using switch case*/

#include<stdio.h>
int main(){
	int choice;
	float p,r=2,b=3,h=4,s=5,l=6,w=7;
	
	printf("enter your choice");
	printf("\n1.triangle\n2.circle\n3.square\n4.rectangle:\n");
	scanf("%d" ,&choice);
	switch(choice){
	
	
	case 1:
		printf("triangle:%f",0.5*b*h);
		break;
	case 2:
		printf("circle:%f",3.14*r*r);
		break;
	case 3:
	    printf("sqaure:%f",s*s);
	    break;
	case 4:
	    printf("rectangle:%f",l*w);
		break;
	default:
	    printf("wrong choice");
		break;
	}
}
