// Project Euler - Problem 3
/* The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ? */

#include <stdio.h>
#include <math.h>
#include <limits.h>

int isPrime(long long num);

int main(){
    long long num;
    num = 600851475143;
	long long i, bigPrime = 0;
	
	for (i = 1; i < sqrt(num); i++) {
		if (num % i == 0 && isPrime(i) && i > bigPrime) {
			bigPrime = i;
			printf ("maior: %lld\n",bigPrime);
		}
	}
	
	getchar();
	return 0;
}

int isPrime(long long num)
{
    long long aux;
    
    for (aux = 2; aux <= sqrt(num); aux++) {
        if (num % aux == 0)
           return 0;
    }
    
    return 1;
}
