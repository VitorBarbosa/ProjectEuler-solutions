using System;

namespace ProjectEuler {
    /**
     * PROJECT EULER - PROBLEM 17
     * If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
     * 
     * If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?
     * 
     * 
     * NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and
     * 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance
     * with British usage. */
    class Problem017 {
        // wrote them out to make it harder to make mistakes
        private static int[] oneToTen = { "one".Length, "two".Length, "three".Length, "four".Length, "five".Length, "six".Length, 
                                            "seven".Length, "eight".Length, "nine".Length, "ten".Length };
        private static int[] teens = { "eleven".Length, "twelve".Length, "thirteen".Length, "fourteen".Length, "fifteen".Length, 
                                         "sixteen".Length, "seventeen".Length, "eighteen".Length, "nineteen".Length };
        private static int[] tens = { "twenty".Length, "thirty".Length, "forty".Length, "fifty".Length, "sixty".Length, "seventy".Length, "eighty".Length, "ninety".Length };

        private static int hundred = "hundred".Length;
        private static int and = "and".Length;
        private static int thousand = "one thousand".Length - 1;
        static void Main(string[] args) {
            int sum = 0;

            int hundreds = 0;

            do {
                if (hundreds >= 1) {
                    sum += oneToTen[hundreds] + hundred;
                    sum += 99 * (oneToTen[hundreds] + hundred + and);
                }
                for (int i = 0; i < oneToTen.Length; i++) {
                    sum += oneToTen[i];
                }
                for (int i = 0; i < teens.Length; i++) {
                    sum += teens[i];
                }
                for (int i = 0; i < tens.Length; i++) {
                    sum += tens[i];
                    for (int j = 0; j < oneToTen.Length - 1; j++) {
                        sum += (tens[i] + oneToTen[j]);
                    }
                }

                hundreds++;
            } while (hundreds < 10);
            sum += thousand;

            Console.WriteLine("Sum is: " + sum);
            Console.ReadKey();
        }
    }
}
