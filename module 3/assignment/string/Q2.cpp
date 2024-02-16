// 2 Write a program in C to separate individual characters from a string.

#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[] = "characters";  
          
    //Displays individual characters from given string  
    printf("Individual characters from given string:\n");  
      
    //Iterate through the string and display individual character  
    for(int i = 0; i < strlen(string); i++){  
        printf("%c ", string[i]);  
    }  
          
    return 0;  
}  
