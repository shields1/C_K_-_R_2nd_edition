#include <stdio.h>

/*
 * Exercise 1-10:
 *     Write a program to copy its input to its output, replacing each
 * 	   tab by \t, each backspace by \b, and each backslash by \\.
 *     This makes tabs and backspaces visible in an unambiguous way.
 */

int main() {
	int ch;
	
	while ((ch = getchar()) != EOF) {
		if (ch == '\t'){
			printf("\\t");
		} else if (ch == '\b') {
			printf("\\b");
		} else if (ch == '\\') {
			printf("\\\\");
		} else {
			putchar(ch);
		}
	}
}
