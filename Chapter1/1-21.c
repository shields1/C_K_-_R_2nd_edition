#include <stdio.h>
/*
 * Write a program entab that replaces strings of blanks by the minimum
 * number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.
 * When either a tab or a single blank would suffice to reach a tab stop, which should be given
 * preference?
 */

#define MAXLINE 1000
#define TABSIZE 4

int get_line(char line[], int limit);
void entab(char to[], char from[], int limit);
void convert_space_to_tab(int i, char line[]);
void print_line(char line[]);

int main() {
    int len;
    char line[MAXLINE];
    char entabbed[MAXLINE];

    while((len = get_line(line, MAXLINE) > 0)) {
        entab(entabbed, line, MAXLINE);
        print_line(entabbed);
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
    entab() : copies a array of chars into another array of chars, changing spaces to tabs.
*/
void entab(char to[], char from[], int limit) {
    int i, c;
    
    for (i = 0; i < limit - 1 && (c = from[i]) != EOF && c != '\n'; i++) {
        if (c == ' ')
    }}