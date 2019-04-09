#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> nameVector;

    std::cout << nameVector.size() << std::endl;

    nameVector.insert(nameVector.begin(), "William");

    if (nameVector.empty()) {
        std::cout << "nameVector is empty" << std::endl;
    } else {
        std::cout << "nameVector is not empty" << std::endl;
    }

    nameVector.push_back("John");
    nameVector.insert(nameVector.begin() + 2, "Amanda");

    std::cout << nameVector.size() << std::endl;

    std::cout << nameVector[2] << std::endl;

    std::vector<std::string>::iterator itName = nameVector.begin();
    int i = 0;
    for (; itName != nameVector.end(); itName++) {
        // std::cout << *itName << std::endl;

        std::cout << i + 1 << ". " << *itName << std::endl;
        i++;
    }

    nameVector.erase(nameVector.begin() + 1);

    std::vector<std::string>::iterator itNameRev = nameVector.end();
    for (; itNameRev != nameVector.begin() - 1; itNameRev--) {
        std::cout << *itNameRev << std::endl;
    }

    nameVector.clear();


    for (int i = 0; i < nameVector.size(); i++) {
        std::cout << nameVector.at(i);
    }

    return 0;
}