#include <iostream>
#include <vector>



int main() {

    std::vector<int> vector = {1,2,3,4,5,6,7,8,9}; //вектор создается на стеке, но содержимое в куче (в хипе)
    
    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

    vector.push_back(1); //в конец добавляется элемент =1

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

    vector.erase(vector.begin()+1); //удаляется элемент удаленный от начала на 1 элемент (=2)

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

    vector.insert(vector.begin() + 4, 11); //вставляется элемент 11 на начало+4 место (вместо 6)\
                                               остальные элементы сдвигаются вправо

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

  
    vector.resize(5); //сохраняем только первые 5 элементов 

    vector.reserve(16); //в массиве отводится место под 16 элементов (вместимость)

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

    
    std::cout << "capacity: " << vector.capacity(); //capacity возвращает вместимость вектора 
    std::cout << std::endl << std::endl;
   
    for (int i = 0; i < vector.size(); i++) {
        vector[i] += 1; //все элементы массива увеличили на 1
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;
    
    vector.shrink_to_fit(); //изменяет вместимость под количество элементов

    
    std::cout << "capacity: " << vector.capacity();
    std::cout << std::endl << std::endl;
    
    vector.clear(); //очищаем вектор

    vector.emplace_back(1);//тоже,что и пуш бэк, но пуш бэк добавляет в конец вектора путем копирования\
                            а эпмлейс бэк создает элемент в конце вектора

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;
   
    return 0;
}