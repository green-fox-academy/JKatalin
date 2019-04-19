#include <iostream>
#include <vector>

int main() {

    std::vector<std::string> listA = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};

    std::vector<std::string> listB = listA;

    std::vector<std::string>::iterator itA = listA.begin();
    bool isItInList = false;
    for (; itA != listA.end() && !isItInList; itA++) {
        if (*itA == "Durian") {
            isItInList = true;
        }
    }
    if (isItInList) {
        std::cout << "List A contains Durian" << std::endl;
    } else {
        std::cout << "List A do not contain Durian" << std::endl;
    }


    listB.erase(listB.begin() + 3);

    listA.insert(listA.begin() + 4, "Kiwifruit");

    if (listA.size() > listB.size()) {
        std::cout << "List A is bigger, than List B" << std::endl;
    } else if (listA.size() < listB.size()) {
        std::cout << "List B is bigger, than List A" << std::endl;
    } else {
        std::cout << "List A is equal with List B" << std::endl;
    }


    bool avocadoInList = false;
    for (int i = 0; i < listA.size(); i++) {
        if (listA.at(i) == "Avocado") {
            std::cout << "The index of Avocado in list A: " << i << std::endl;
            avocadoInList = true;
        }
    }
    if (!avocadoInList) {
        std::cout << "The list does not contain Avocado" << std::endl;
    }


    bool durianInList = false;
    for (int i = 0; i < listB.size(); i++) {
        if (listB.at(i) == "Durian") {
            std::cout << "The index of Durian in list B: " << i << std::endl;
            durianInList = true;
        }
    }
    if (!durianInList) {
        std::cout << "The list does not contain Durian" << std::endl;
    }


    std::string arrFruit[] = {"Pineapple", "Passion Fruit", "Pummelo", "Melon"};
    listB.insert(listB.begin()+4, arrFruit+1, arrFruit+3);


    std::cout << listA.at(2) << std::endl;


    std::cout << std::endl;
    
    for (int i = 0; i < listA.size(); ++i) {
        std::cout << listA.at(i) << std::endl;
    }

    for (int i = 0; i < listB.size(); ++i) {
        std::cout << listB.at(i) << std::endl;
    }

    return 0;
}