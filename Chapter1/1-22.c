#include <stdio.h>
/*
    Write a program to ``fold'' long input lines into two or more shorter lines
   after the last non-blank character that occurs before the n-th column of
   input. Make sure your program does something intelligent with very long
   lines, and if there are no blanks or tabs before the specified column.
*/
#define MAXLINE 1000
#define ROWLENGTH 10

int get_line(char line[], int limit);
void print_line(char line[]);

int main() {
  int len;
  char line[MAXLINE];

  while ((len = get_line(line, MAXLINE) > 0)) {
    print_line(line);
  }
}

int get_line(char line[], int limit) {
  int c, i;
  int counter = 0;

  for (i = 0; i < limit && (c = getchar()) != EOF && c != '\n'; i++) {
    if ((counter > ROWLENGTH) && c == ' ') {
      line[i] = '\n';
      i++;
      counter = 0;
    }
    line[i] = c;
    counter++;
  }
  if (c = '\n') {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  return i;
}

void print_line(char line[]) { printf("%s\n", line); }
