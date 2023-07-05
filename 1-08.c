#include <stdio.h>

/*
 * Exercise 1-8:
 *     Write a program to count blanks, tabs and newlines.
 * 
 */

int main() {
	
	int blanks = 0;
	int tabs = 0;
	int newlines = 0;
	int c;
	
	while((c = getchar()) != EOF) {
		if (c == '\n') {
			++newlines;
		} else if (c == ' ') {
			++blanks;
		} else if (c == '\t') {
			++tabs;
		}
	} 
	printf("Total newlines:\t%d\n", newlines);
	printf("Total blanks  :\t%d\n", blanks);
	printf("Total tabs    :\t%d\n", tabs);
}


