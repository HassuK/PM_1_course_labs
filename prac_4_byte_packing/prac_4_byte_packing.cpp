#include <iostream>
#include <math.h>

unsigned int output_number(unsigned char number) {
	unsigned int num = 0;
	for (int i = 0; i < 8; i++) {
		int b = (number >> i) & 0b00000001;
		num += b*pow(2, i*b);
	}
	return num;
}



unsigned char input_number(unsigned int number) {
	unsigned char box = 0b00011111;

	unsigned char number_byte = box & number;
	std::cout << "number in bytes ";
	for (int i = 7; i >= 0; --i)
		std::cout << ((number_byte >> i) & 0b00000001);
	std::cout << std::endl;
	return number_byte;
}

int main()
{
	unsigned int a;
	std::cin >> a;
	std::cout << std::endl;
	input_number(a);
	std::cout << std::endl;
	std::cout << output_number(input_number(a));



	return 0;
}
