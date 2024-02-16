// 12 Write a program in C to find the number of times a given word 'is' appears in the given string.

#include <stdio.h>
#include <string.h>

int main() {
    int ctr = 0, i, freq = 0; // Declare variables for counting, iteration, and frequency
    int t, h, e, spc; // Variables to check for 'the ' pattern
    char str[100]; // Declare a character array to store the string

    printf("\n\nFind the number of times the word 'the ' in any combination appears :\n"); // Display information about the task
    printf("----------------------------------------------------------------------\n");

    printf("Input the string : ");
    fgets(str, sizeof str, stdin); // Read a string from the standard input (keyboard)

    ctr = strlen(str); // Calculate the length of the string

    /* Counts the frequency of the word 'the' with a trailing space */
    for (i = 0; i <= ctr - 3; i++) {
        // Check if the characters form 'the ' pattern (regardless of case)
        t = (str[i] == 't' || str[i] == 'T');
        h = (str[i + 1] == 'h' || str[i + 1] == 'H');
        e = (str[i + 2] == 'e' || str[i + 2] == 'E');
        spc = (str[i + 3] == ' ' || str[i + 3] == '\0');

        // Increment frequency if 'the ' pattern is found
        if ((t && h && e && spc) == 1)
            freq++;
    }

    printf("The frequency of the word \'the\' is : %d\n\n", freq); // Display the frequency of 'the '
	
	return 0; // Return 0 to indicate successful execution of the program
}

