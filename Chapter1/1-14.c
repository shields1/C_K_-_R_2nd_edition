#include <stdio.h>
/*
 * Exercise 1-14:
 *     Write a program to print a histogram of the frequencies of different characters in its input.
 */

int main() {
    // counters
    int c, i, j;
    // total amounts of letters in the alphabet
    int alphabet[26];
    // initate all values in the array to zero
    for (i = 0; i < 26; ++i) {
        alphabet[i] = 0;
    }

    // get input from user until EOF 
    while ((c = getchar()) != EOF) {
        /* determines whether the character is a letter in the alphabet
        ** 'a' = 0x61 
        ** 'A' = 0x41
        ** so c - 'a' or 'A' give the position in the alphabet for that character 
        ** and adds 1 to the array
        */
        if (c >= 'a' && c <= 'z') {
            ++alphabet[c - 'a'];
        } else if (c >= 'A' && c <= 'Z') {
            ++alphabet[c - 'A'];
        }
    }
    // loop from a - z and prints the total amount of that character in "*"
    for (i = 0; i < 26; ++i) {
        printf("%c : ", i + 'a');
        for (j = 0; j < alphabet[i]; ++j) {
            printf("*");
        } 
        printf("\n");
    }
    return 0;
}