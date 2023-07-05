#include <stdio.h>
/*
 * Exercise 1-13:
 *     Write a program to print a histogram of the lengths of words in
 *     its input. It is easy to draw the histogram with the bars
 *     horizontal; a vertical orientation is more challenging.
 */
 
#define IN  1       /* inside a word                     */
#define OUT 0       /* outside a word                    */
#define MAXWORD 15  /* maximum of words to fit our array */

int main() {
	
	int c, i, j, charCount, wordCount;
	int wordLength[MAXWORD];
	
	charCount = wordCount = 0;
	
	for (i = 0; i < MAXWORD; ++i){
		wordLength[i] = 0;
	}
	
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			wordLength[wordCount] = charCount;
			charCount = 0;
			++wordCount;
		} else  {
			++charCount;
		}
	}
	
	for (i = 0; i < wordCount; ++i) {
		for (j = 0; j < wordLength[i]; ++j) {
			printf("*");
		}
		printf("\n");
	}

}
