/* PROJECT EULER - PROBLEM 17
If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19
letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?


NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and
115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance
with British usage. */

#include <stdio.h>

#define SOMA100(A,B) if (num == (A) || num % 100 == (A)) letters += (B)

int main(void)
{
    int num, letters = 0;

    for (num = 1; num <= 29; num++) {
        SOMA100(1,3);
        SOMA100(2,3);
        SOMA100(3,5);
        SOMA100(4,4);
        SOMA100(5,4);
        SOMA100(6,3);
        SOMA100(7,5);
        SOMA100(8,5);
        SOMA100(9,4);
        SOMA100(10,3);
        SOMA100(11,6);
        SOMA100(12,6);
        SOMA100(13,8);
        SOMA100(14,8);
        SOMA100(15,7);
        SOMA100(16,7);
        SOMA100(17,9);
        SOMA100(18,9);
        SOMA100(19,8);
        SOMA100(20,6);
        if (num % 20 >= 1 && num % 20 <= 9) {
            letters += 6;
            SOMA100(num-20,)
        }

    }

    printf ("%d letras\n", letters);

    return 0;
}
