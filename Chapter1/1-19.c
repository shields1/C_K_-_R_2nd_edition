#include <stdio.h>
/*
 * Exercise 1-19: 
 *     Write a function reverse(s) that reverses the character string s. 
 *     Use it to write a program that reverses its input a line at a time.
*/
#define MAXLINE 1000

int getline(char line[], int limit);
void reverseline(char line[], int totalChars);
void printline(char line[]);

int main() {
    int len;                        /* counter    */
    char line[MAXLINE];             /* input line */

    while ((len = getline(line, MAXLINE)) > 0) {
        reverseline(line, len);
        printline(line);
    }
    return 0;
}

/* getline: reads line into line, return length of line */
int getline(char line[], int limit) {
    int c, i;
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* reverseline: reverse line  */
void reverseline(char line[], int totalChars) {
    char temp[totalChars];
    int i;
    int j = 0;
    /* copy current line to temporary array    */
    for (i = 0; i <= totalChars; ++i) {
        temp[i] = line[i];
    }
    /* copy temp back to line in reverse order */
    for (i = totalChars - 1; i >= 0; --i) {
        line[j] = temp[i];
        ++j;
    }
}

/* printline: print an array of characters */
void printline(char line[]) {
    printf("%s\n", line);
}