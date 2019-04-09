#include <iostream>
#include <map>
#include <vector>

int main() {

    std::map<int, char> charMap;

    if (charMap.empty()) {
        std::cout << "charMap is empty" << std::endl;
    } else {
        std::cout << "charMap is not empty" << std::endl;
    }

    charMap[97] = 'a';
    charMap[98] = 'b';
    charMap[99] = 'c';
    charMap[65] = 'A';
    charMap[66] = 'B';
    charMap[67] = 'C';

    std::map<int, char>::iterator charIt = charMap.begin();
    for (; charIt != charMap.end(); charIt++) {
        std::cout << charIt->first << charIt->second << std::endl;
    }

    charMap[68] = 'D';

    std::cout << charMap.size() << std::endl;

    std::cout << charMap[99] << std::endl;

    charMap.erase(97);

    if (charMap.count(100) != 0) {
        std::cout << "We used it already" << std::endl;
    } else {
        std::cout << "We did not use yet" << std::endl;
    }

    charMap.clear();


    
    std::map<int, char>::iterator charIt2 = charMap.begin();
    for (; charIt2 != charMap.end(); charIt2++) {
        std::cout << charIt2->first << charIt2->second << std::endl;
    }


    return 0;
}