/*  Project Euler problem 7
*   By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6^(th) prime is 13.
*
*   What is the 10001^(st) prime number?    */

#include <stdio.h>
#include <math.h>

#define CONTMAX 10001   //numero primo a ser encontrado

int isPrime (int num);

int main () {
    int n, cont = 1;

    for (n = 3; cont<=CONTMAX; n += 2){
        if (isPrime (n)) {
            cont ++;
            if (cont == CONTMAX)
                printf ("%d° numero primo: %d\n",cont, n);
        }
    }

    return 0;
}

int isPrime (int num) {
    if (num < 3)
        return num == 2;

    if (num % 2 == 0)
        return num == 0;

    int raiz = (int) sqrt (num);

    for (int i = 3; i <= raiz; i += 2) {
        if (num % i == 0)
            return 0;
    }
    // e primo
    return 1;
}
