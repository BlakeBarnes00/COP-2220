/*
	8.20 (Counting the Number of Words in a String)
	Write a program that inputs several lines of text and uses strtok to count the total
	number of words. Assume that the words are separated by either spaces or newline
	characters and that there are at most 10 lines with each line being no longer than
	80 characters. Stop taking more input lines if the user enters 10 lines or an empty
	line. Remember to include the C string header to use strtok and other string-related
	functions.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * get_line();
int get_word_count(char *string);

int main() {
	int word_count = 0, max_lines = 5;
	char *line;

	for(int i = 1; i <= max_lines; i++) {
		line = get_line();
		if(strlen(line) == 0) {
			free(line);
			break;
		}

		word_count += get_word_count(line);
		free(line);
	}

	printf("The number of words is: %i\n", word_count);
	return 0;
}

char * get_line() {
	printf("Enter a line of text: ");
	// Get a line of text that is no longer than 80 characters.
	char *string = malloc(sizeof(char) * 80);
	if(fgets(string, 80, stdin) == NULL) {
		return NULL;
	}
	string[strlen(string) - 1] = '\0'; // Remove the newline
	return string;
}

int get_word_count(char *string) {
	int word_count = 0;
	// Tokenize the string
	char *token;
	token = strtok(string, " \n");
	while(token != NULL) {
		word_count++;
		token = strtok(NULL, " \n");
	}
	return word_count;
}
