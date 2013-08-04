/*
	Project Euler - problem 9
	A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
	a^(2) + b^(2) = c^(2)

	For example, 3^(2) + 4^(2) = 9 + 16 = 25 = 5^(2).

	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
	Find the product abc.
*/

#include <stdio.h>
#include <conio.c>
#include <math.h>

int main(void)
{
// Declaracoes
   double a, b, c;
   
// Instrucoes
   for (a = 1; a <= 500; a++) {
       for (b = 1; b <= 500; b++) {
           c = sqrt (a * a + b * b);
           if (a + b + c == 1000 && a < b && b < c) {
              printf ("a: %.0f b: %.0f c: %.0f\n",a,b,c);
              printf ("Produto: %.0f\n",a*b*c);
			  break;
           }
       }
   }

  getch();
  return 0;
}
