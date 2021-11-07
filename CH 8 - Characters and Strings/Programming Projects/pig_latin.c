/*
	8.13 (Pig Latin)
	Write a program that encodes English-language phrases into pig Latin. Pig Latin is a form of coded
	language often used for amusement. Many variations exist in the methods used to form pig Latin
	phrases. For simplicity, use the following algorithm: to form a pig Latin phrase from an
	English-language phrase, tokenize the phrase into words with function strtok. To translate each
	English word into a pig-Latin word, place the first letter of the English word at the end of the
	English word and add the letters "ay". Thus the word "jump" becomes "umpjay", the word "the"
	becomes "hetay" and the word "computer" becomes "omputercay". Blanks between words remain as
	blanks. Assume the following: The English phrase consists of words separated by blanks and is no
	more than 80 characters long, there are no punctuation marks, and all words have two or more
	letters. The function printLatinWord should display each word separately.

	[Hint: Each time a token is found in a call to strtok, pass the token pointer to function
	printLatinWord, and print the pig-Latin word. Also remember that you need to include the C string
	header to use strtok and other string related functions.]

	Note: We've provided simplified rules for converting words to pig Latin here. For more detailed
	rules and variations, visit en.wikipedia.org/wiki/Pig_latin.
*/


// Used Valgrind to make sure that there was no memory leaks
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * convert_word(char *word);
char * convert_string(char *string);

int main() {
	printf("=== English to Pig-Latin translator ===\n"
			"\nEnter a phrase in English: ");

	char string[80];
	fgets(string, 80, stdin);
	char *pig_latin = convert_string(string);
	
	printf("%s\n", pig_latin);

	free(pig_latin);
	return 0;
}

char * convert_word(char *word) {
	// first character + '\0'
	char fc[2] = {0};
	fc[0] = word[0];

	// allocate memory for the word + 'ay' + '\0'
	char *ret = malloc(sizeof(char) * strlen(word) + 2 + 1); 
	strcpy(ret, &word[1]);
	strcat(ret, fc);
	strcat(ret, "ay");
	return ret;
}

char * convert_string(char * string) {
	// Get the amount of spaces in the string
	unsigned int spaces = 0;
	for(int i = 0; string[i] != '\0'; i++) {
		if(string[i] == ' ') {
			spaces++;
		}
	}

	// Allocate memore for the new_string + the amount of 'ay's + '\0' 
	char *s = malloc(sizeof(char) * strlen(string) + (2 * spaces) + 1);

	// Tokenize the string first until it is NULL
	char *tokenPtr = strtok(string, " \n");
	while(tokenPtr != NULL) {
		char *word = convert_word(tokenPtr);	// convert the word to Pig Latin
		strcat(s, word);						// concatenate the converted word
		free(word);								// free the word from memory
		strcat(s, " "); 						// add a space
		tokenPtr = strtok(NULL, " \n"); 		// Get the next word
	}
	
	return s;
}