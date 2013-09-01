using System;
using System.Numerics;

namespace ProjectEuler {
	/* 	The Fibonacci sequence is defined by the recurrence relation:

			Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.

		Hence the first 12 terms will be:

			F1 = 1
			F2 = 1
			F3 = 2
			F4 = 3
			F5 = 5
			F6 = 8
			F7 = 13
			F8 = 21
			F9 = 34
			F10 = 55
			F11 = 89
			F12 = 144

		The 12th term, F12, is the first term to contain three digits.

		What is the first term in the Fibonacci sequence to contain 1000 digits? */
	public class Problem025 {
		static void Main(string[] args) {
			BigInteger fibNumber = 2, fibOld, fibPrevious = 1;
			BigInteger thousandDigits = BigInteger.Pow(10, 999);
			int counter = 3;

			do {
				fibOld = fibNumber;
				fibNumber += fibPrevious;
				fibPrevious = fibOld;
				counter++;
			} while (fibNumber < thousandDigits);

			Console.Write(counter + " repetitions");
			Console.ReadKey();
		}
	}
}
