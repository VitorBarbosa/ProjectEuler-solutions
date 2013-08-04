/*  Project Euler problem 6
*    The sum of the squares of the first ten natural numbers is,
*    1^(2) + 2^(2) + ... + 10^(2) = 385
*
*    The square of the sum of the first ten natural numbers is,
*    (1 + 2 + ... + 10)^(2) = 55^(2) = 3025
*
*    Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
*
*    Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.  */

#include <stdio.h>

#define SUM100 (1+100)*50   //sum of first 100 numbers

int main () {
    int sqofsum;
    sqofsum = SUM100*SUM100;

    int sumofsq = 0;
    int n;

    for (n=1;n<=100;n++) {
        sumofsq = sumofsq + (n*n);
    }

    printf ("Sum of squares is %d\n", sumofsq);
    printf ("Square of sums is %d\n", sqofsum);
    printf ("Answer: %d\n", sqofsum-sumofsq);

    return 0;
}
