#include <stdio.h>

/*
 * Exercise 1-9:
 *     Write a program to copy its input to its output, replacing each
 * 	   string of one or more blanks by a single blank.
 * 
 */

int main() {
	int ch;
	while ((ch = getchar()) != EOF || '\n'){
		if (ch == ' ') {
			putchar(ch);
			while ((ch = getchar()) == ' ');
		}
		putchar(ch);
	}

}
