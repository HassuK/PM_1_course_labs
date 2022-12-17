#include <iostream>
#include <vector>



int main() {

    std::vector<int> vector = {1,2,3,4,5,6,7,8,9}; //������ ��������� �� �����, �� ���������� � ���� (� ����)
    
    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

    vector.push_back(1); //� ����� ����������� ������� =1

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

    vector.erase(vector.begin()+1); //��������� ������� ��������� �� ������ �� 1 ������� (=2)

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

    vector.insert(vector.begin() + 4, 11); //����������� ������� 11 �� ������+4 ����� (������ 6)\
                                               ��������� �������� ���������� ������

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

  
    vector.resize(5); //��������� ������ ������ 5 ��������� 

    vector.reserve(16); //� ������� ��������� ����� ��� 16 ��������� (�����������)

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

    
    std::cout << "capacity: " << vector.capacity(); //capacity ���������� ����������� ������� 
    std::cout << std::endl << std::endl;
   
    for (int i = 0; i < vector.size(); i++) {
        vector[i] += 1; //��� �������� ������� ��������� �� 1
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;
    
    vector.shrink_to_fit(); //�������� ����������� ��� ���������� ���������

    
    std::cout << "capacity: " << vector.capacity();
    std::cout << std::endl << std::endl;
    
    vector.clear(); //������� ������

    vector.emplace_back(1);//����,��� � ��� ���, �� ��� ��� ��������� � ����� ������� ����� �����������\
                            � ������� ��� ������� ������� � ����� �������

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;
   
    return 0;
}