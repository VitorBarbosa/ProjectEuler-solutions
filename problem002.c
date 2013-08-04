//Fibonacci

#include <stdio.h>


int Fibonacci (){
	int soma = 2, fibaux = 2, fib = 2;
	int fibmenos = 1;

	do{
		fibaux = fib; //2
		fib += fibmenos;
		fibmenos = fibaux;
		if (fib % 2 == 0){ //se é par
			soma = soma + fib; 
		}
	} while (fib < 4000000);
	printf ("%d\n\n",soma);
    return soma;
}


int main (){
	Fibonacci();
	getchar();
}
