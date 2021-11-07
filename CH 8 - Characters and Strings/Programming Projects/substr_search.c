/*
	8.16 (Searching for Substrings) Write a program that inputs a line of text and a search string
	from the keyboard. Using function strstr, locate the first occurrence of the search string in the line
	of text, and assign the location to variable searchPtr of type char *. If the search string is found,
	print the remainder of the line of text beginning with the search string. Then, use strstr again to
	locate the next occurrence of the search string in the line of text. If a second occurrence is found,
	print the remainder of the line of text beginning with the second occurrence. [Hint: The second call
	to strstr should contain searchPtr + 1 as its first argument. Also, remember to include the C string
	header to use the strstr function.]

	Note: assume that a line of text is no longer than 80 characters.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	printf("Enter a line of text: ");
	char input[80];
	if(fgets(input, 80, stdin) == NULL) {
		printf("ERROR %d\n", __LINE__);
		return EXIT_FAILURE;
	}

	printf("Enter your search string: ");
	char search_string[80];
	if(fgets(search_string, 80, stdin) == NULL) {
		return EXIT_FAILURE;
	}
	search_string[strlen(search_string) - 1] = '\0'; // remove the newline from fgets

	// find the first occurance
	char *first_occurance = strstr(input, search_string);
	first_occurance[strlen(first_occurance) - 1] = '\0';
	if(first_occurance == NULL) {
		return EXIT_FAILURE;
	}
	printf("%s\n", first_occurance);

	// find second occurance past the first ocurrance
	char *second_occurance = strstr(first_occurance + strlen(search_string), search_string);
	if(second_occurance == NULL) {
		return EXIT_FAILURE;
	}
	printf("%s\n", second_occurance);

	return 0;
}