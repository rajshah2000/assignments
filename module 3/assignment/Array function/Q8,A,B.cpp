// 8 WAP to reverse a string and check that the string is palindrome or not Write a program of structure employee that provides the following

// C implementation to check if a given
// string is palindrome or not
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = { "abbba" };

	// Start from first and
	// last character of str
	int l = 0;
	int h = strlen(str) - 1;

	// Keep comparing characters
	// while they are same
	while (h > l) {
		if (str[l++] != str[h--]) {
			printf("%s is not a palindrome\n", str);
			return 0;
			// will return from here
		}
	}

	printf("%s is a palindrome\n", str);

	return 0;
}

