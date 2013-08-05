using System;

namespace ProjectEuler {

	/// <summary>
	/// Project Euler problem 15 - Lattice paths
	/// Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
	/// How many such routes are there through a 20×20 grid?
	/// 
	/// Inspiration from: http://www.mathblog.dk/project-euler-15/
	/// </summary>
	class Problem015 {
		static void Main(string[] args) {
			int size = 20;
			long[,] grid = new long[size + 1, size + 1];

			// right and bottom borders only have 1 possible path
			for (int i = 0; i < size; i++) {
				grid[i, size] = 1;
				grid[size, i] = 1;
			}

			// other points are the sum of their right and bottom neighbours
			for (int i = size - 1; i >= 0; i--) {
				for (int j = size - 1; j >= 0; j--) {
					grid[i, j] = grid[i + 1, j] + grid[i, j + 1];
				}
			}

			Console.Write(grid[0, 0]);
			Console.ReadKey();
		}
	}
}
