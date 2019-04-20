#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> vectorShopping = {"eggs", "milk", "fish", "apples", "bread", "chicken"};

    std::vector<std::string>::iterator itShop;
    bool isMilkInlist = false;
    for (itShop = vectorShopping.begin(); itShop != vectorShopping.end(); itShop++) {
        if (*itShop == "milk") {
            isMilkInlist = true;
        }
    }
    if (isMilkInlist) {
        std::cout << "We have milk on the list." << std::endl;
    } else {
        std::cout << "We don't have milk on the list." << std::endl;
    }


    bool isBananaInList = false;
    for (unsigned int i = 0; i < vectorShopping.size(); i++) {
        if (vectorShopping.at(i) == "bananas") {
            isBananaInList = true;
        }
    }
    if (isBananaInList) {
        std::cout << "We have bananas on the list." << std::endl;
    } else {
        std::cout << "We don't have bananas on the list." << std::endl;
    }


    return 0;
}


//Do we have milk on the list?
//Do we have bananas on the list?
