#include "лаба 7, симейк.h"

namespace func {
	int max_el_diag(int* a[], int n) {
		int max;
		int str = 0;
		int st = 0;
		for (int i = 0; i < n; i++) {
			max = a[i][0];
			str = i;
			for (int j = 0; j < n; j++) {
				if (a[i][j] > max) {
					max = a[i][j];
					str = i;
					st = j;
				}
			}
			if (str != st) {
				return 0;
			}
			else continue;
		}
		return 1;
	}

	int zero_in_num(int a) {
		int num;
		if (a == 0)
			return 1;
		while (a) {
			num = a % 10;
			if (num == 0) {
				return 1;
			}
			a /= 10;
		}
		return 0;
	}

	int mult(int* a[], int n) {

		int c = 1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == j) {
					c = c * a[i][j];
				}
				else continue;
			}
		}
		return c;
	}


	int swap_on_mult(int* a[], int n) {
		int c = 1;
		if (max_el_diag(a, n)) {
			c = mult(a, n);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (zero_in_num(a[i][j])) {
						a[i][j] = c;
					}
				}
			}
		}
		return 0;
	}

}