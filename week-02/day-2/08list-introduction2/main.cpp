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


    listB.erase(listB.begin()+3);

    listA.insert(listA.begin()+4, "Kiwifruit");

    if (listA.size()>listB.size()){
        std::cout<< "List A is bigger, than List B"<<std::endl;
    }


    for (int i = 0; i < listA.size(); ++i) {
        std::cout << listA.at(i) << std::endl;
    }

    for (int i = 0; i < listB.size(); ++i) {
        std::cout << listB.at(i) << std::endl;
    }

    return 0;
}