#include <iostream>
#include <math.h>



class Cube {
private:
	double m_cubeSide = 0;
	double m_cubeDiagonal = 0;

public:
	Cube() {};
	~Cube() {};
	bool setCubeSide(double cubeSide) {
		if (cubeSide <= 0) {
			std::cout << "Wrong side of cube\n";
			return false;
		}
		m_cubeSide = cubeSide;
	}
	void cubeDiagonal() {
		m_cubeDiagonal = m_cubeSide*sqrt(3);
	}
	void cubeInfo() {
		std::cout << "Side of cube is " << m_cubeSide << std::endl;
		std::cout << "Diagonal of cube is " << m_cubeDiagonal << std::endl;
	}
};




int main() {

	Cube cubik;
	double side;
	
	std::cout << "Input side of cube\n";
	std::cin >> side;


	if (cubik.setCubeSide(side))
	{
		cubik.cubeDiagonal();
		cubik.cubeInfo();
	}

	return 0;
}


