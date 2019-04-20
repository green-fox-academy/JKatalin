#include <iostream>
#include <map>


int main() {
    std::map<std::string, int> mapProduct;

    mapProduct["Eggs"] = 200;
    mapProduct["Milk"] = 200;
    mapProduct["Fish"] = 400;
    mapProduct["Apples"] = 150;
    mapProduct["Bread"] = 50;
    mapProduct["Chicken"] = 550;

    std::string less201 = "";
    std::string more150 = "";
    std::map<std::string, int>::iterator itProduct;
    for (itProduct = mapProduct.begin(); itProduct != mapProduct.end(); itProduct++) {
        if (itProduct->second < 201) {
            less201 = itProduct->first;
            std::cout << less201 << "'s cost is less, than 201." << std::endl;
        }

        if (itProduct->second > 150) {
            more150 = itProduct->first;
            std::cout << more150 << "'s cost is more, than 150, its cost is: " << itProduct->second << std::endl;
        }
    }

    if (less201 == "") {
        std::cout << "There is no product on the list, which one is less, than 201." << std::endl;
    }

    if (more150 == "") {
        std::cout << "There is no product on the list, which one is more, than 150." << std::endl;
    }


    return 0;
}


//Which products cost less than 201? (just the name)
//Which products cost more than 150? (name + price)
