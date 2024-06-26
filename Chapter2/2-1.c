#include <stdio.h>
#include <float.h>
#include <limits.h>
/*
    Write a program to determine the ranges of char, short, int, and long
    variables, both signed and unsigned, by printing appropriate values from standard headers
    and by direct computation. Harder if you compute them: determine the ranges of the various
    floating-point types.
*/

int main() {
    printf("CHAR_BIT  :  %d\n", CHAR_BIT);
    printf("CHAR_MAX  :  %d\n", CHAR_MAX);
    printf("CHAR_MIN  : %d\n", CHAR_MIN);
    printf("INT_MAX   :  %d\n", INT_MAX);
    printf("INT_MIN   : %d\n", INT_MIN);
    printf("LONG_MAX  :  %ld\n", LONG_MAX); 
    printf("LONG_MIN  : %ld\n", LONG_MIN);
    printf("SCHAR_MAX :  %d\n", SCHAR_MAX);
    printf("SCHAR_MIN : %d\n", SCHAR_MIN);
    printf("SHRT_MAX  :  %d\n", SHRT_MAX);
    printf("SHRT_MIN  : %d\n", SHRT_MIN);
    printf("UCHAR_MAX :  %d\n", UCHAR_MAX);
    printf("UINT_MAX  :  %d\n", UINT_MAX);
    printf("ULONG_MAX :  %ld\n", ULONG_MAX);
    printf("USHRT_MAX :  %d\n", USHRT_MAX);

}