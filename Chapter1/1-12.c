#include <stdio.h>

#define IN  1  /* inside a word  */
#define OUT 0  /* outside a word */

/*
 * Exercise 1-12:
 *     Write a program that prints its input one word per line
 */

int main() {
	
	int ch;

	
	while ((ch = getchar()) != EOF) {
		if (ch == ' ' || ch == '\n' || ch == '\t') {
			printf("\n");
			while ((ch = getchar()) == ' ');
		}
		if (ch == ' ') {
			;
		} else {
			putchar(ch);
		}
	}
}
