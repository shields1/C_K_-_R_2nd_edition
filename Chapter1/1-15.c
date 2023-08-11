#include <stdio.h>  
/*
 * Exercise 1-15:
 *     Rewrite the temperature conversion program of Section 1.2 to use a
 *     function for conversion.
 * 
 */
// function prototype
int convert(int celsius, int fahr);

int main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
    
    fahr = lower;
    while (fahr <= upper) {
        printf("%d\t%d\n", fahr, convert(celsius, fahr));
        fahr = fahr + step;
    }
}

int convert(int celsius, int fahr) {
    return (celsius = 5 * (fahr - 32) / 9);
}