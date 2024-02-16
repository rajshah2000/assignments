/* 33
 C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
 */ 
 
 #include<stdio.h>
 int main(){
 	int a,p1,p2,p3;
 	printf("enter integer");
 	scanf("%d",&a);
 	
 	p1=a;
 	printf("n1 is %d",p1);
 	
 	p2=a*a;
 	printf("\nn1 is %d",p2);
 	
 	p3=a*a*a;
 	printf("\nn1 is %d",p3);
 }
