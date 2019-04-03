#include <iostream>

int main() {
    int numberOfGirls;
    std::cout << "Please enter the number of girls at the party: ";
    std::cin >> numberOfGirls;

    int numberOfBoys;
    std::cout << "Please enter the number of boys at the party: ";
    std::cin >> numberOfBoys;

    if (numberOfGirls == 0) {
        std::cout << " Sausage party" << std::endl;
    } else if (numberOfGirls + numberOfBoys >= 20 && numberOfGirls == numberOfBoys) {
        std::cout << " The party is excellent!" << std::endl;
    } else if (numberOfGirls + numberOfBoys >= 20 && numberOfGirls != numberOfBoys) {
        std::cout << " Quite cool party!" << std::endl;
    } else {
        std::cout << " Average party..." << std::endl;
    }

    return 0;
}