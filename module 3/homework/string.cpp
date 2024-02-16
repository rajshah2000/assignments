// string

#include<stdio.h>
int main(){
	char name[1000],ch;
	int i,count=0;
	
	printf("\nenter name\n");
	gets(name);
	
	printf("enter a charcter to find its frequency");
	scanf("%c",&ch);
	
	for(i=0;name[i]!='\0';++i){
		if(ch==name[i])
		++count;
	}
	printf("frequency of %c=%d",ch,count);
	return 0;
}
