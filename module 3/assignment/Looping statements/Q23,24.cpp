/* 23 , 24 A
C Program to Reverse a Number Using FOR Loop
Series Program:
*/

#include <stdio.h>

int main() {
    int num, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);
    return 0;
}.
