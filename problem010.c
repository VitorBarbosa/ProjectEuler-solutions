// Vitor Mascena Barbosa
/* Project Euler - Problem 10
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million. */

#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned long long soma = 0;
    int num;
    
    for (num = 3; num <= 2000000; num+=2) {
        if (isPrime(num))
           soma += num;
    }
    
    soma+=2;
    printf ("soma = %lld\n",soma);
    
    getchar ();
    return 0;
}

int isPrime(int num)
{
    int aux;
    
    for (aux = 2; aux <= sqrt(num); aux++) {
        if (num % aux == 0)
           return 0;
    }
    
    return 1;
}
