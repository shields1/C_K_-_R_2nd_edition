#include <stdio.h>
/*
 * Write a program entab that replaces strings of blanks by the minimum
 * number of tabs and blanks to achieve the same spacing. Use the same tab stops
 * as for detab. When either a tab or a single blank would suffice to reach a
 * tab stop, which should be given preference?
 */

#define MAXLINE 1000
#define TABSIZE 4

int get_line(char line[], int limit);
void init_array(char array[], int size);
void entab(char to[], char from[], int limit);
void convert_space_to_tab(int i, int nSpaces, char line[]);
void print_line(char line[]);

int main() {
    int len;
    char line[MAXLINE];
    char entabbed[MAXLINE];

    while ((len = get_line(line, MAXLINE) > 0)) {
        entab(entabbed, line, MAXLINE);
        print_line(entabbed);
    }
}
/*
    get_line() : reads a line into line, returns the length of the line
*/
int get_line(char line[], int limit) {
    int c, i;
    init_array(line, MAXLINE);
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


void init_array(char array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = ' ';
    }
}
/*
    entab() : copies a array of chars into another array of chars, changing
   spaces to tabs.
*/
void entab(char to[], char from[], int limit) {
    int i, c, nSpaces;
    init_array(to, MAXLINE);
    for (i = 0; i < limit - 1 && (c = from[i]) != EOF && c != '\n'; i++) {
        nSpaces = 0;
        if (c == ' ') {
            while (from[i + 1] == ' ') {
                nSpaces++;
                i++;
            }
            convert_space_to_tab(i, nSpaces, to);
        }
        if (c == '\n') {
            to[i] = c;
            i++;
        }
        to[i] = c;
    }
    to[i] = '\0';
}

void convert_space_to_tab(int i, int nSpaces, char to[]) {
    int nTabs = nSpaces / TABSIZE;
    int space = nSpaces % TABSIZE;
    for (int j = 0; j < nTabs; j++) {
        to[i] = '\t';
    }
    for (int j = 0; j < space; j++) {
        to[i] = ' ';
        i++;
    }
}

void print_line(char entabbed[]) { printf("%s\n", entabbed); }
