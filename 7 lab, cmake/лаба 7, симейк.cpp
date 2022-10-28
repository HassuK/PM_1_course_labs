
#include "лаба 7, симейк.h"
#include <fstream>
#include <iostream>


int main()
{
	int size_n;
	const unsigned int N = 100;
	int matrix[N][N] = { 0 };
	int* p[N] = { 0 };
	std::ifstream in("input.txt", std::ios::in);
	std::ofstream out("output.txt", std::ios::out);

	in >> size_n;

	for (int i = 0; i < size_n; i++) {
		for (int j = 0; j < size_n; j++) {
			in >> matrix[i][j];
		}
	}
	for (int i = 0; i < size_n; i++) {
		p[i] = matrix[i];
	}

	func::swap_on_mult(p, size_n);

	for (int i = 0; i < size_n; i++) {
		for (int j = 0; j < size_n; j++) {
			out << matrix[i][j] << " ";
		}
		out << std::endl;
	}

	in.close();
	out.close();


	return 0;
}
