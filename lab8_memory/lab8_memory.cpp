#include <iostream>

int main()
{
	float a;
	std::cout << "Input number\n";
	std::cin >> a;

	for (int i = 0; i < sizeof(a); i++) {								//1 ������
		printf("%d ", *(((unsigned char*)&a)+i));
	}

	std::cout << std::endl;

	unsigned char* c = (unsigned char*)&a;								//2 ������
	for (int i = 0; i < sizeof(a); i++) {
		printf("%d ", c[i]);
	}



	return 0;
}