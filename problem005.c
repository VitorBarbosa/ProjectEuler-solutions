/*  Project Euler Problem 5
*    Vitor Mascena Barbosa
*
*    2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
*    What is the smallest number that is evenly divisible by all of the numbers from 1 to 20?	*/

#include <stdio.h>

int main () {
    int num;

    for (num=1; ;num++) {
        if (num % 20 == 0) {
            if (num % 19 == 0) {
                if (num % 18 == 0) {
                    if (num % 17 == 0) {
                        if (num % 16 == 0) {
                            if (num % 15 == 0) {
                                if (num % 14 == 0) {
                                    if (num % 13 == 0) {
                                        if (num % 12 == 0) {
                                            if (num % 11 == 0) {
                                                        printf ("Número %d\n", num);
                                                        break;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
