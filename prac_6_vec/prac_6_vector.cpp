#include <iostream>
#include <vector>



int main() {

    std::vector<int> vector = {1,2,3,4,5,6,7,8,9}; //âåêòîð ñîçäàåòñÿ íà ñòåêå, íî ñîäåðæèìîå â êó÷å (â õèïåfа)
    
    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

    vector.push_back(1); //â êîíåö äîáàâëÿåòñÿ ýëåìåíò =1

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

    vector.erase(vector.begin()+1); //óäàëÿåòñÿ ýëåìåíò óäàëåííûé îò íà÷àëà íà 1 ýëåìåíò (=2)

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

    vector.insert(vector.begin() + 4, 11); //âñòàâëÿåòñÿ ýëåìåíò 11 íà íà÷àëî+4 ìåñòî (âìåñòî 6)\
                                               îñòàëüíûå ýëåìåíòû ñäâèãàþòñÿ âïðàâî

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

  
    vector.resize(5); //ñîõðàíÿåì òîëüêî ïåðâûå 5 ýëåìåíòîâ 

    vector.reserve(16); //â ìàññèâå îòâîäèòñÿ ìåñòî ïîä 16 ýëåìåíòîâ (âìåñòèìîñòü)

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;

    
    std::cout << "capacity: " << vector.capacity(); //capacity âîçâðàùàåò âìåñòèìîñòü âåêòîðà 
    std::cout << std::endl << std::endl;
   
    for (int i = 0; i < vector.size(); i++) {
        vector[i] += 1; //âñå ýëåìåíòû ìàññèâà óâåëè÷èëè íà 1
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;
    
    vector.shrink_to_fit(); //èçìåíÿåò âìåñòèìîñòü ïîä êîëè÷åñòâî ýëåìåíòîâ

    
    std::cout << "capacity: " << vector.capacity();
    std::cout << std::endl << std::endl;
    
    vector.clear(); //î÷èùàåì âåêòîð

    vector.emplace_back(1);//òîæå,÷òî è ïóø áýê, íî ïóø áýê äîáàâëÿåò â êîíåö âåêòîðà ïóòåì êîïèðîâàíèÿ\
                            à ýïìëåéñ áýê ñîçäàåò ýëåìåíò â êîíöå âåêòîðà

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl << std::endl;
   
    return 0;
}
