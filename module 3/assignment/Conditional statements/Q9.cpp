/* 9
C Program to Check Uppercase or Lowercase or Digit or Special
Character
*/

#include<stdio.h>
int main(){
	char ch;
	printf("enter any charcter");
	scanf(" %c",&ch);
	
	if(ch>=65 && ch<=90){
		printf("upper case");
	}else if(ch>=97 && ch<=122){
		printf("lower case");
	}else if(ch>=32 && ch<=63){
		printf("speial char");
		
}
	
}
