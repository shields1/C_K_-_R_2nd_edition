#include <stdio.h>
/*
 * Exercise 1-17:
 *     Write a program to print all input lines that are
 *     long than 80 characters
 */
#define MAXLINE 1000
#define PRINTLINE 81

int getline(char line[], int maxline);
void printline(char line[], int len);

int main() {
    int len;                 /* length of line */
    char line[MAXLINE];      /* input line     */

    while ((len = getline(line, MAXLINE)) > 0) {
        if (len >= PRINTLINE) {
            printline(line, len);
        }

    }
}
/* getline: reads line into line, returns length of line */
int getline(char line[], int limit) {
    int c, i;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
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
void printline(char line[], int len) {
    printf("%s", line);
}