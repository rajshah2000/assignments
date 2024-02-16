// with return without argument

#include<stdio.h>
int sumoftwo();
int main(){
	int ans;
	ans = sumoftwo();
	printf("\n answer is %d",ans);
}
int sumoftwo(){
	int a,b,c;
	
	printf("\n enter value of a:");
	scanf("%d",&a);
	printf("\n enter vlue of b:");
	scanf("%d",&b);
	
	c=a+b;
	
	return c;
}

