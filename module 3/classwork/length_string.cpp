// string fuction

#include<stdio.h>
#include<string.h>
int main(){
	char s1[20],s2[20];
	int len,a;
	
	printf("\n enter s1");
	gets(s1);
	
	// strcpy(s2,s1);
	// puts(s2)
	
//	len=strlen(s1);
//	printf("\n total legnth is %d",len);

     gets(s2);
//     a=strcmp(s1,s2);
  //   printf("\ a=%d",a);
     
    // if(a==0){
     //	printf("\n both are same");
	 //} else{
	 //	printf("\n different");
	 //}
	 
	 strcat(s1,s2);
	 puts(s1);
}
