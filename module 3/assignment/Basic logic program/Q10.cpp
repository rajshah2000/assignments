/* 10
find the area of a rectangular prism formula : A=2(wl+hl+hw)
*/

#include<stdio.h>
int main(){
	int w,h,l,a;
	
	printf("enter value of w");
	scanf("%d" ,&w);
	
	printf("enter value of h");
	scanf("%d" ,&h);
	
	printf("enter value of l");
	scanf("%d" ,&l);
	
//	printf("enter value of a");
//	scanf("%d" ,&a);
	
	a=2*((w*l)+(h*l)+(h*w));
	printf("area of rectangular prism is %d",a);
	
	return 0;
}
