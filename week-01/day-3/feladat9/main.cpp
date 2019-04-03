#include <iostream>

int main() {
    int marathonKilometer;
    std::cout << "Please enter the marathon distance is kilometers: ";
    std::cin >> marathonKilometer;
    std::cout <<"It is " << marathonKilometer * 0.6214 << " miles" << std::endl;
    return 0;
}