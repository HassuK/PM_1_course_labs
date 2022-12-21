
#include <iostream>
#include <stdio.h>

void sum(char a[], char b[], char res[]) {
	int len_1 = strlen(a);
	int len_2 = strlen(b);
	res[0] = '0';
	if (len_1 == len_2) {
		for (int i = len_1 - 1; i >= 0; i--) {
			res[i + 1] += a[i] - 48 + b[i] - 48;
			if ((int)res[i + 1] > 9) {
				res[i] = 1;
				res[i + 1] = (int)res[i+1] - 10;
				if (i == 0) {
					res[i] += 48;
				}
			}
			res[i+1] += 48;
		}
	}
	else if (len_1 < len_2) {
		int j = len_2-len_1;
		for (int i = len_2 - 1; i >= 0; i--) {
			if (len_2 - 1 - j < 0) {
				res[i + 1] += b[i] - 48;
			}
			else {
				res[i + 1] += a[len_2 - 1 - j] - 48 + b[i] - 48;
				j++;
			}
			if ((int)res[i + 1] > 9) {
				res[i] = 1;
				res[i + 1] = (int)res[i + 1] - 10;
				if (i == 0) {
					res[i] += 48;
				}
			}
			res[i + 1] += 48;
		}
	}
	else if (len_1 > len_2) {
		int j = len_1 - len_2;
		for (int i = len_1 - 1; i >= 0; i--) {
			if (len_1 - 1 - j < 0) {
				res[i + 1] += a[i] - 48;
			}
			else {
				res[i + 1] += a[i] - 48 + b[len_1 - 1 - j] - 48;
				j++;
			}
			if ((int)res[i + 1] > 9) {
				res[i] = 1;
				res[i + 1] = (int)res[i + 1] - 10;
				if (i == 0) {
					res[i] += 48;
				}
			}
			res[i + 1] += 48;
		}
	}
}


void multiplication(int a[], int b[], int len_1, int len_2) {

	int mult[2000] = {};
	int carry = 0;
	int carryd = 0;
	int k = 0;

	for (int i = 0; i < len_2; i++) {
		k = i;
		for (int j = 0; j <= len_1; j++) {
			if (j == len_1) {
				mult[k] = carry;
			}
			else {
				if (j == 0) {
					carry = 0;
				}
				carryd = mult[k];
				mult[k] = (b[len_2 - 1 - i] * a[len_1 - 1 - j] + mult[k] + carry) % 10;
				carry = (b[len_2 - 1 - i] * a[len_1 - 1 - j] + carryd + carry) / 10;
				k += 1;
			}
		}

	}
	if (carry != 0) {
		std::cout << carry;
	}

	for (int i = len_1 + len_2 - 2; i >= 0; i--) {
		std::cout << mult[i];
	}

}


int main()
{
	
	char num_1[1000] = { '\0' };
	char num_2[1000] = { '\0' };
	char res[1001] = { '\0' };
	int num1[1000] = {0};
	int num2[1000] = {0};
	

	std::cout << "input number A.\nafter entering A, input number B\n";
	gets_s(num_1, 1000);
	std::cout << std::endl;
	gets_s(num_2, 1000);
	std::cout << std::endl;
	sum(num_1, num_2, res);
	std::cout << std::endl;
	
	
	if (res[0] != '0') {
		for (int i = 0; i < strlen(res); i++) {
			std::cout << res[i];
		}
	}
	else for (int i = 1; i < strlen(res); i++) {
		std::cout << res[i];
	}

	//char massiv to int massiv
	for (int i = 0; i < strlen(num_1); i++) {
		num1[i] = num_1[i] - '0';
	}
	for (int i = 0; i < strlen(num_2); i++) {
		num2[i] = num_2[i] - '0';
	}

	std::cout << std::endl;


	multiplication(num1, num2, strlen(num_1), strlen(num_2));

	

	return 0;
}

