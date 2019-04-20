#include <iostream>
#include <map>
#include <vector>

int main() {
    std::map<std::string, int> mapProduct;

    mapProduct["Eggs"] = 200;
    mapProduct["Milk"] = 200;
    mapProduct["Fish"] = 400;
    mapProduct["Apples"] = 150;
    mapProduct["Bread"] = 50;
    mapProduct["Chicken"] = 550;

    std::cout << "The fish price is: " << mapProduct["Fish"] << std::endl;

    int maxPrice = 0;
    std::string mostExpProduct = "";
    int amount = 0;
    int counter = 0;
    std::string prodName = "";
    int minPrice = mapProduct["Eggs"];
    std::string cheapestProd = "";

    std::map<std::string, int>::iterator itProduct;
    for (itProduct = mapProduct.begin(); itProduct != mapProduct.end(); itProduct++) {
        if (itProduct->second > maxPrice) {
            maxPrice = itProduct->second;
            mostExpProduct = itProduct->first;
        }

        amount = amount + itProduct->second;

        if (itProduct->second == 300) {
            counter = counter + 1;
        }

        if (itProduct->second == 125) {
            prodName = itProduct->first;
            std::cout << "We can buy " << prodName << " for 125." << std::endl;
        }

        if (itProduct->second < minPrice) {
            minPrice = itProduct->second;
            cheapestProd = itProduct->first;
        }
    }
    
    std::cout << "The most expensive product is the " << mostExpProduct << " and the price is: " << maxPrice << std::endl;

    std::cout << "The average price is: " << amount / mapProduct.size() << std::endl;

    std::cout << "300 is below to " << counter << " products." << std::endl;

    if (prodName == "") {
        std::cout << "We can't buy anything for 125." << std::endl;
    }

    std::cout << "The cheapest product is the " << cheapestProd << " and its price is: " << minPrice << std::endl;


    return 0;
}



//How much is the fish?
//What is the most expensive product?
//What is the average price?
//How many products' price is below 300?
//Is there anything we can buy for exactly 125?
//What is the cheapest product?
