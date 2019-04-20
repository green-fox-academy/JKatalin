#include <iostream>
#include <vector>

int main() {
    std::vector<int> vectorFinance = {500, 1000, 1250, 175, 800, 120};

    int amount = 0;
    int maxSpend = 0;
    int minSpend = vectorFinance.at(0);
    for (unsigned int i = 0; i < vectorFinance.size(); i++) {
        amount = amount + vectorFinance.at(i);
        if (vectorFinance.at(i) > maxSpend) {
            maxSpend = vectorFinance.at(i);
        }

        if (vectorFinance.at(i) < minSpend) {
            minSpend = vectorFinance.at(i);
        }
    }
    std::cout << "I spend: " << amount << std::endl;

    std::cout << "My greatest expense was: " << maxSpend << std::endl;

    std::cout << "My cheapest spending was: " << minSpend << std::endl;

    std::cout << "The average of my spending: " << amount / vectorFinance.size() << std::endl;


    return 0;
}