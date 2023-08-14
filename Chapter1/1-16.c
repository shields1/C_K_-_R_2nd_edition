#include <stdio.h>
/**
 * Exercise 1-16:
 *     Write a program to print the length of an arbitrarily long 
 *     input line and as much text as possible
 **/

#define MAXLINE 1000                  /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main() {
    int c;
    int len;                        /* current line length        */
    int max;                        /* maximum length seen so far */
    char line[MAXLINE];             /* current input line         */
    char longest[MAXLINE];          /* longest line save here     */

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        if (line[len - 1] != '\n') {
            while((c = getchar()) != EOF && c != '\n') {
                ++len;
            }
        }

        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {   
        if(max > MAXLINE) {
            printf("Line larger than allowed, line has been truncated.\n");
            printf("Max allowed: %d \n", MAXLINE);
        }    
        printf("Longest line was %d characters: \n", max);

        printf("%s", longest);
    }
 
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; 
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i = 0;
    while((to[i] = from[i]) != '\0') {
        ++i;
    }
}