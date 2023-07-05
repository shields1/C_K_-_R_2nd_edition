#include <stdio.h>

#define IN  1  /* inside a word  */
#define OUT 0  /* outside a word */

/*
 * Exercise 1-11:
 *     How would you test the word count program? What kinds of
 *     input are most likely to uncover bugs if there are any?
 */
int main() {
	
	int ch, newLine, newWord, newChar, state;
	
	state = OUT;
	newLine = newWord = newChar = 0;
	
	while ((ch = getchar()) != EOF) {
		++newChar;
		if (ch == '\n') {
			++newLine;
		}
		if (ch == ' ' || ch == '\n' || ch == '\t') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			++newWord;
		}
	}
	printf("Lines: %d\nWords: %d\nCharacters: %d\n", newLine, newWord, newChar);
}

