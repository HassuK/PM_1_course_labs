#include <iostream>

int main()
{
	float a;
	std::cout << "Input number\n";
	std::cin >> a;

	for (int i = 0; i < sizeof(a); i++) {								//1 способ
		printf("%d ", *(((unsigned char*)&a)+i));
	}

	std::cout << std::endl;

	unsigned char* c = (unsigned char*)&a;								//2 способ
	for (int i = 0; i < sizeof(a); i++) {
		printf("%d ", c[i]);
	}



	return 0;
}