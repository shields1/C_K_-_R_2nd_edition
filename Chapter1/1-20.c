#include <stdio.h>
/*
 * Write a program detab that replaces tabs in the input with the proper number
 * of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
 * Should n be a variable or a symbolic parameter?
*/

#define MAXLINE 1000
#define TABSIZE 4

int get_line(char line[], int limit);
void detab(char to[], char from[], int limit);
void convert_tab_to_space(int i, char line[]);
void print_line(char line[]);

int main() {
    int len;        
    char line[MAXLINE];
    char detabbed[MAXLINE];

    while((len = get_line(line, MAXLINE) > 0)) {
        detab(detabbed, line, MAXLINE);
        print_line(detabbed);
    }
}

/*
    get_line() : reads a line into line, returns the length of the line
*/
int get_line(char line[], int limit) {
    int c, i;
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

/*
    detab() : copies a array of chars into another array of chars, changing tabs to space.
*/
void detab(char to[], char from[], int limit) {
    int i, c;

    for (i = 0; i < limit - 1 && (c = from[i]) != EOF && c != '\n'; i++) {
        if (c == '\t') {
            convert_tab_to_space(i, to);
        }
        to[i] = c;
    }
    if (c == '\n') {
        to[i] = c;
        i++;
    }
    to[i] = '\0';
}
/*
    convert_tab_to_space() : Adds spaces instead of tabs based on TABSIZE
*/
void convert_tab_to_space(int i, char line[]) {
    for (int j = 0; j < TABSIZE; j++) {
        line[i] = ' ';
        i++;
    }
}

void print_line(char detabbed[]) {
    printf("%s\n", detabbed);
}