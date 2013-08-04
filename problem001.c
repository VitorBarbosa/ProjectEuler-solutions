// Adiciona todos os múltiplos de 3 ou 5 até 1.000

#include <stdio.h>

int main(){
    int sum=0, n=1;
    while (n<1000) {
		if (n%3 == 0){
			sum += n;
		}
		if ((n%5 == 0) && (n%3 != 0)){
			sum += n;
		}
		n++;
    }
	printf("A soma eh %d",sum);
}
