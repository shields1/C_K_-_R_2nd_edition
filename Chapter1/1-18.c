#include <stdio.h>
/*
 * Exercise 1-18:
 *     Write a program to remove trailing blanks and tabs from each line of input, 
 *     and to delete entirely blank lines.
 */
#define MAXLINE 1000

int getline(char line[], int limit);
void printline(char line[]);

int main() {
    int len, i;                 /* counters       */
    char line[MAXLINE];         /* input line     */

    while ((len = getline(line, MAXLINE)) > 0) {
        for (i = len - 1; (line[i] == ' ' || line[i] == '\t' || line[i] == '\n'); --i);
        line[++i] = '\n';
        line[++i] = '\0';
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

/* printline: print an array of characters */
void printline(char line[]) {
    printf("%s", line);
}