/* 6
Find the Character Is Vowel or Not
*/

#include<stdio.h>
int main(){
	char alpha;
	
	printf("enter any letter");
	scanf("%c",&alpha);
	
	if(alpha=='a'|| alpha=='e'|| alpha=='i'|| alpha=='o'|| alpha=='u'){
		printf("it is vowel");
	}else{
     	printf("\n is not");
	}
}
