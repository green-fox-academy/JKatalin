#include <iostream>
#include <map>

int main() {
    std::map<std::string, float> mapProduct;
    std::map<std::string, int> mapBob;
    std::map<std::string, int> mapAlice;

    mapProduct["Milk"] = 1.07;
    mapProduct["Rice"] = 1.59;
    mapProduct["Eggs"] = 3.14;
    mapProduct["Cheese"] = 12.60;
    mapProduct["Chicken breast"] = 9.40;
    mapProduct["Apples"] = 2.31;
    mapProduct["Tomato"] = 2.58;
    mapProduct["Potato"] = 1.75;
    mapProduct["Onion"] = 1.10;

    mapBob["Milk"] = 3;
    mapBob["Rice"] = 2;
    mapBob["Eggs"] = 2;
    mapBob["Cheese"] = 1;
    mapBob["Chicken breast"] = 4;
    mapBob["Apples"] = 1;
    mapBob["Tomato"] = 2;
    mapBob["Potato"] = 1;

    mapAlice["Rice"] = 1;
    mapAlice["Eggs"] = 5;
    mapAlice["Chicken breast"] = 2;
    mapAlice["Apples"] = 1;
    mapAlice["Tomato"] = 10;

    float amountBob = 0;
    float amountAlice = 0;
    int pieceBob = 0;
    int pieceAlice = 0;
    std::map<std::string, float>::iterator itProduct;
    std::map<std::string, int>::iterator itBob;
    std::map<std::string, int>::iterator itAlice;

    for (itBob = mapBob.begin(); itBob != mapBob.end(); itBob++) { //solution1 easier to amount
        amountBob = amountBob + mapProduct[itBob->first] * itBob->second;
    }

    for (itProduct = mapProduct.begin(); itProduct != mapProduct.end(); itProduct++) { //solution2 to amount
        for (itAlice = mapAlice.begin(); itAlice != mapAlice.end(); itAlice++) {
            if (itProduct->first == itAlice->first) {
                amountAlice = amountAlice + itProduct->second * itAlice->second;
            }
            pieceAlice = pieceAlice + itAlice->second;
        }
    }

    std::cout << "Bob's final amount is: " << amountBob << std::endl;

    std::cout << "Alice's final amount is: " << amountAlice << std::endl;

    if (mapAlice["Rice"] > mapBob["Rice"]) {
        std::cout << "Alice buys more rice." << std::endl;
    } else if (mapAlice["Rice"] < mapBob["Rice"]) {
        std::cout << "Bob buys more rice." << std::endl;
    } else {
        std::cout << "They buy equal rice." << std::endl;
    }

    if (mapAlice["Potato"] > mapBob["Potato"]) {  //if this key is not in the map, the default value = type default value
        std::cout << "Alice buys more potato." << std::endl;
    } else if (mapAlice["Potato"] < mapBob["Potato"]) {
        std::cout << "Bob buys more potato." << std::endl;
    } else {
        std::cout << "They buy equal potato." << std::endl;
    }

    if (mapAlice.size() > mapBob.size()) {
        std::cout << "Alice buys more different products." << std::endl;
    } else if (mapAlice.size() < mapBob.size()) {
        std::cout << "Bob buys more different products." << std::endl;
    } else {
        std::cout << "They buy equal different products." << std::endl;
    }

    if (pieceAlice > pieceBob) {
        std::cout << "Alice buys more products." << std::endl;
    } else if (pieceAlice < pieceBob) {
        std::cout << "Bob buys more products." << std::endl;
    } else {
        std::cout << "They buy equal products." << std::endl;
    }


    return 0;
}



//How much does Bob pay?
//How much does Alice pay?
//Who buys more Rice?
//Who buys more Potato?
//Who buys more different products?
//Who buys more products? (piece)
