// wit return with argument

#include<stdio.h>
int sumoftwo(int a, int b);
int main(){
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	printf("%d",sumoftwo(x,y));
}
int sumoftwo(int a, int b){
	return a+b;
}
